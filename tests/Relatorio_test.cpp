#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Relatorio.hpp"
#include "Pedido.hpp"
#include <vector>
#include <map>

TEST_CASE("Testando Relatorio") {
    std::vector<Pedido*> pedidos;
    Pedido pedido1("Cliente1", "Pedido pronto");
    Pedido pedido2("Cliente2", "Entregue");
    pedidos.push_back(&pedido1);
    pedidos.push_back(&pedido2);

    Relatorio relatorio(pedidos);
    
    relatorio.exibirItensMaisVendidos();
    relatorio.exibirClientesCadastrados({{"Cliente1", "Pizza"}, {"Cliente2", "Hamburguer"}});
    relatorio.calcularLucroTotal();
    relatorio.calcularLucroPorItem();
    relatorio.exibirPedidosPorCliente();
    relatorio.exibirGastosPorCliente();
    relatorio.exibirStatusPedidos();
}

