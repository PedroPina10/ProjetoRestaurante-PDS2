#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Cliente.hpp"
#include "Cardapio.hpp"
#include "Pedido.hpp"

class MockCardapio : public Cardapio {
public:
    void exibirCardapio() override {}
    const std::vector<Item>& getItens() const override {
        static std::vector<Item> itens = {{"Pizza", 30.0}, {"Refrigerante", 5.0}};
        return itens;
    }
};

TEST_CASE("Criar conta adiciona cliente ao sistema") {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    auto clientes = Cliente::getClientes();
    CHECK_FALSE(clientes.empty());
}

TEST_CASE("Autenticacao bem-sucedida") {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    Cliente cliente(&cardapio, &pedidos);
    CHECK(cliente.entrar());
}

TEST_CASE("Autenticacao falha") {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente cliente(&cardapio, &pedidos);
    CHECK_FALSE(cliente.entrar());
}

TEST_CASE("Alterar senha") {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    Cliente cliente(&cardapio, &pedidos);
    CHECK(cliente.entrar());
    cliente.alterarSenha();
    auto clientes = Cliente::getClientes();
    CHECK_EQ(clientes[cliente.getUsername()], cliente.getSenha());
}

TEST_CASE("Realizar pedido") {
    MockCardapio cardapio;
    std::vector<Pedido*> pedidos;
    Cliente::criarConta();
    Cliente cliente(&cardapio, &pedidos);
    CHECK(cliente.entrar());
    cliente.realizarPedido();
    CHECK_FALSE(pedidos.empty());
}

