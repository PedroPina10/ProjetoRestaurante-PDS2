#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <vector>
#include <map>
#include "Pedido.hpp"
#include "Cardapio.hpp"
#include "utils.hpp"

class Cliente {
private:
    static std::map<std::string, std::string> clientes; // Banco de dados de clientes (username -> senha)
    std::map<std::string, int> pontosRecompensa; // Armazena os pontos por cliente
    std::string username;
    std::string senha;
    std::vector<Pedido*>* listaPedidos;
    Cardapio* cardapio;

    bool autenticar(const std::string& user, const std::string& pass);

public:
    Cliente(Cardapio* cardapioRef, std::vector<Pedido*>* pedidosRef);

    static void criarConta();
    bool entrar();
    void alterarSenha();
    void realizarPedido();
    void exibirStatusPedido();
    void actions_cliente();
    static void menuInicial(Cardapio* cardapio, std::vector<Pedido*>* listaPedidos);
    static const std::map<std::string, std::string>& getClientes();
    void acumularPontos(double valorPedido);
    void exibirPontos();
    bool aplicarDescontoSeDisponivel(double& valorPedido);
};

#endif // CLIENTE_HPP
