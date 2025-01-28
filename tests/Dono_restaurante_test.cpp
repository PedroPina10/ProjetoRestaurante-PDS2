#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "DonoRestaurante.hpp"
#include "Pedido.hpp"
#include <vector>
#include <map>

TEST_CASE("Testando DonoRestaurante") {
    std::vector<Pedido*> pedidos;
    Pedido pedido1("Cliente1", "Pedido feito");
    Pedido pedido2("Cliente2", "Pedido feito");
    pedidos.push_back(&pedido1);
    pedidos.push_back(&pedido2);

    DonoRestaurante dono(nullptr, &pedidos);
    std::map<std::string, std::string> pedidosFeitos = {{"Cliente1", "Pizza"}, {"Cliente2", "Hamburguer"}};
    dono.actions_dono(pedidosFeitos);
}

