#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define DOCTEST_CONFIG_NO_MULTITHREADING
#include "doctest.h"
#include "Cardapio.hpp"

TEST_CASE("Teste básico: Adicionar itens ao cardápio") {
    Cardapio cardapio;
    cardapio.adicionarItem("Pizza", "Pizza de mussarela", 30.50);
    cardapio.adicionarItem("Hamburguer", "Hamburguer artesanal", 25.00);
    auto itens = cardapio.getItens();
    CHECK(itens.size() == 2);
    CHECK(itens[0].nome == "Pizza");
    CHECK(itens[0].descricao == "Pizza de mussarela");
    CHECK(itens[0].preco == 30.50);
    CHECK(itens[1].nome == "Hamburguer");
}

TEST_CASE("Teste: Remover item do cardápio") {
    Cardapio cardapio;
    cardapio.adicionarItem("Pizza", "Pizza de mussarela", 30.50);
    cardapio.adicionarItem("Hamburguer", "Hamburguer artesanal", 25.00);
    cardapio.removerItem("Pizza");
    auto itens = cardapio.getItens();
    CHECK(itens.size() == 1);
    CHECK(itens[0].nome == "Hamburguer");
}

TEST_CASE("Teste: Editar preço de um item") {
    Cardapio cardapio;
    cardapio.adicionarItem("Pizza", "Pizza de mussarela", 30.50);
    cardapio.editarPrecoItem("Pizza", 35.00);
    auto itens = cardapio.getItens();
    CHECK(itens.size() == 1);
    CHECK(itens[0].preco == 35.00);
}

TEST_CASE("Teste: Exibir cardápio") {
    Cardapio cardapio;
    cardapio.adicionarItem("Pizza", "Pizza de mussarela", 30.50);
    cardapio.adicionarItem("Hamburguer", "Hamburguer artesanal", 25.00);
}

TEST_CASE("Teste: Remover item inexistente") {
    Cardapio cardapio;
    cardapio.adicionarItem("Pizza", "Pizza de mussarela", 30.50);
    cardapio.removerItem("Sushi");
    auto itens = cardapio.getItens();
    CHECK(itens.size() == 1);
    CHECK(itens[0].nome == "Pizza");
}
