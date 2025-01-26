README do Sistema de Gerenciamento de Restaurante

Sobre o Projeto

Este projeto é um sistema de gerenciamento de restaurante que simula as principais funções de um estabelecimento gastronômico. Ele é implementado em C++ e organizado de forma modular, facilitando a manutenção e expansão do código.

O sistema é dividido em diferentes papéis que interagem entre si: Dono do Restaurante, Cliente, Cozinheiro e Entregador. Cada papel possui funcionalidades específicas para gerenciar o cardápio, pedidos, relatórios e mais.

Estrutura do Código

O projeto foi modularizado em diferentes arquivos para organização e fácil manutenção:

main.cpp: Contém o ponto de entrada do programa e a lógica principal que conecta os diferentes módulos.

Cardapio.hpp e Cardapio.cpp: Gerencia os itens do cardápio, permitindo adicionar, editar, remover e exibir itens.

Cliente.hpp e Cliente.cpp: Gerencia as interações com os clientes, como login, criação de conta, realização e consulta de pedidos.

DonoRestaurante.hpp e DonoRestaurante.cpp: Permite que o dono do restaurante gerencie o cardápio, fornecedores e visualize relatórios. A senha padrão do dono é 0000.

Fornecedor.hpp e Fornecedor.cpp: Gerencia os fornecedores do restaurante, incluindo cadastro, edição e exclusão.

Pedido.hpp e Pedido.cpp: Representa os pedidos feitos pelos clientes, armazenando itens, status e detalhes do cliente.

Relatorio.hpp e Relatorio.cpp: Gera relatórios sobre vendas, clientes cadastrados, lucro, e outras estatísticas.

Cozinheiro.hpp e Cozinheiro.cpp: Exibe pedidos pendentes e permite marcar pedidos como prontos.

Entregador.hpp e Entregador.cpp: Exibe pedidos prontos para entrega e permite marcar pedidos como entregues.

Utils.hpp e Utils.cpp: Contém funções auxiliares, como validação de entradas e impressão de linhas decorativas.

Funcionalidades Principais

Dono do Restaurante

Senha Padrão: 0000

Gerenciamento de cardápio (adicionar, editar e remover itens).

Cadastro e edição de fornecedores.

Geração de relatórios sobre o desempenho do restaurante (lucro, itens mais vendidos, etc.).

Alteração da senha.

Cliente

Criação de conta e login.

Consulta do cardápio.

Realização de pedidos, incluindo a seleção de itens, quantidade e endereço de entrega.

Consulta do status dos pedidos realizados.

Cozinheiro

Exibição de pedidos pendentes.

Marcação de pedidos como prontos.

Entregador

Exibição de pedidos prontos para entrega.

Marcação de pedidos como entregues.



Execute o Programa:


Senha Padrão

A senha inicial para o Dono do Restaurante é 0000. Essa senha pode ser alterada no próprio sistema.

Melhorias Futuras

Implementação de testes automatizados para garantir a qualidade do código.

Expansão das funcionalidades de relatório.

Melhorias na interface de interação com o usuário.

Suporte para persistência de dados em arquivos ou banco de dados.
Feito por : Pedro Henrique Rodrigues Pina, Vitor Coimbra Pontes Maia, Lucas Lima Ribeiro, Lucas de Almeida Souza.
