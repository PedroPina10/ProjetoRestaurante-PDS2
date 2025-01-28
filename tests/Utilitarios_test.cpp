#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "utils.hpp"

TEST_CASE("Testando utils") {
    CHECK(validarEntradaSimNao("s") == true);
    CHECK(validarEntradaSimNao("S") == true);
    CHECK(validarEntradaSimNao("n") == true);
    CHECK(validarEntradaSimNao("N") == true);
    CHECK(validarEntradaSimNao("x") == false);
    
    CHECK(validarSenha("") == true);
    CHECK(validarSenha("    ") == false);
    CHECK(validarSenha("senha") == true);
}

