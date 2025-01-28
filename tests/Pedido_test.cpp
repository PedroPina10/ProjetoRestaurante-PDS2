#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Pedido.hpp"

TEST_CASE("Testando Pedido") {
    Pedido pedido("Cliente1", "Pedido feito");

    CHECK(pedido.getCliente() == "Cliente1");
    CHECK(pedido.getStatus() == "Pedido feito");

    pedido.setStatus("Pedido pronto");
    CHECK(pedido.getStatus() == "Pedido pronto");
}

