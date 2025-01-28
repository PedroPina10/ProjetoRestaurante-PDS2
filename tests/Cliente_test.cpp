#include "Cliente.hpp"
#include "Cardapio.hpp"
#include "Pedido.hpp"
#include <gtest/gtest.h>

class MockCardapio : public Cardapio {
public:
    void exibirCardapio() override {}
    const std::vector<Item>& getItens() const override {
        static std::vector<Item> itens = {{"Pizza", 30.0}, {"Refrigerante", 5.0}};
        return itens;
    }
};

TEST(ClienteTest, CriarConta) {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    auto clientes = Cliente::getClientes();
    ASSERT_FALSE(clientes.empty());
}

TEST(ClienteTest, AutenticacaoBemSucedida) {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    Cliente cliente(&cardapio, &pedidos);
    ASSERT_TRUE(cliente.entrar());
}

TEST(ClienteTest, AutenticacaoFalha) {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente cliente(&cardapio, &pedidos);
    ASSERT_FALSE(cliente.entrar());
}

TEST(ClienteTest, AlterarSenha) {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    Cliente cliente(&cardapio, &pedidos);
    ASSERT_TRUE(cliente.entrar());
    cliente.alterarSenha();
    auto clientes = Cliente::getClientes();
    ASSERT_EQ(clientes[cliente.getUsername()], cliente.getSenha());
}

TEST(ClienteTest, RealizarPedido) {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    Cliente cliente(&cardapio, &pedidos);
    ASSERT_TRUE(cliente.entrar());
    cliente.realizarPedido();
    ASSERT_FALSE(pedidos.empty());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

