#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Cozinheiro.hpp"
#include "Pedido.hpp"
#include <vector>

TEST_CASE("Testando Cozinheiro") {
    std::vector<Pedido*> pedidos;
    Pedido pedido1("Cliente1", "Pedido feito");
    Pedido pedido2("Cliente2", "Pedido feito");
    pedidos.push_back(&pedido1);
    pedidos.push_back(&pedido2);

    Cozinheiro cozinheiro(&pedidos);
    cozinheiro.actions_cozinheiro();
    CHECK(pedido1.getStatus() == "Pedido pronto");
}

