#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Entregador.hpp"
#include "Pedido.hpp"
#include <vector>

TEST_CASE("Testando Entregador") {
    std::vector<Pedido*> pedidos;
    Pedido pedido1("Cliente1", "Pedido pronto");
    Pedido pedido2("Cliente2", "Pedido feito");
    pedidos.push_back(&pedido1);
    pedidos.push_back(&pedido2);

    Entregador entregador(&pedidos);
    entregador.actions_entregador();
    CHECK(pedido1.getStatus() == "Pedido entregue");
}

