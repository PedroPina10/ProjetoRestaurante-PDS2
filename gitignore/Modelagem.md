Reataurante
User Stories:

1. Classe Pedido: Responsável por registrar e armazenar o pedido de cada cliente. Ela pode ser atualizada para refletir os seguintes status: “pedido enviado”, “pedido pronto”, “pedido a caminho” e “pedido entregue”.
Critérios de aceitação: O sistema deve permitir o armazenamento de cada pedido de cliente, fornecendo essas informações para as demais classes sempre que necessário. Além disso, a classe deve mostrar o status atual de cada pedido.

2. Classe Cardápio: Responsável por gerenciar as atualizações dos itens disponíveis no restaurante, com a capacidade de ser atualizada sempre que houver mudanças.
Critérios de aceitação: O sistema deve possibilitar a visualização completa dos itens do cardápio, incluindo suas especificações e possíveis variações.

3. Classe Relatório, que sintetiza dados gerais sobre o financeiro do restaurante, tais 
como lucro diário, despesas diárias e pedidos mais e menos frequentemente pedidos

Critérios de aceitação: 
Deve receber dados dos pedidos dos clientes e calcular o lucro baseado no custo de produção 
de cada pedido. 
Deve sintetizar os gastos eventuais e adiciona-los ao relatório.
Deve contabilizar cada pedido é apontar quais os mais e menos populares. 

4. Como Dono do Restaurante, quero poder cadastrar novos fornecedores no sistema 
para gerenciar meus pedidos de insumos. Além disso, quero receber gastos e lucros do
restaurante, de maneira geral.

Critérios de aceitação:
Deve ser possível cadastrar um novo fornecedor informando seu nome, endereço e telefone.
Deve ser possível visualizar a lista de fornecedores cadastrados no sistema.
Deve ser possível editar ou excluir fornecedores já cadastrados no sistema.
Deve ser possível visualizar os pratos mais e menos vendidos do restaurante.
Deve ser possível visualizar o lucro diário, semanal e mensal do restaurante. 

5. Como Cliente, quero poder realizar pedidos de comida pelo aplicativo do restaurante 
para receber na minha casa.

Critérios de aceitação:
Deve ser possível visualizar o cardápio do restaurante no aplicativo.
Deve ser possível selecionar os itens que desejo pedir e informar meu endereço para entrega.
Deve ser possível visualizar o status do meu pedido em tempo real.
Deve ser possível cancelar o pedido antes que ele seja preparado.

6. Como Entregador, quero receber notificações dos novos pedidos que devo entregar 
para que possa organizar minha rota de entrega.

Critérios de aceitação:
Deve ser possível visualizar os pedidos pendentes de entrega no meu aplicativo.
Deve ser possível visualizar o endereço de entrega e o contato do cliente.
Deve ser possível visualizar a quanto tempo cada pedido está “a caminho”.
Deve ser possível alterar o status do pedido para "entregue" após a entrega ser realizada.

7. Como Cozinheiro, quero poder ver os pedidos de comida que foram feitos para que 
possa prepará-los de acordo com as especificações do cliente.

Critérios de aceitação:
Deve ser possível visualizar os pedidos pendentes de preparo no sistema.
Deve ser possível ver os detalhes de cada pedido, incluindo os itens selecionados pelo cliente.
Deve ser possível marcar um pedido como "preparado" após finalizar o seu preparo
