
Cartões CRC:

1. Classe: Dono  
   Responsabilidades:  
   - Gerenciar os fornecedores registrados no sistema.  
   - Monitorar e editar o cardapio 
   - Acessar relatórios de vendas e faturamento.  
   Colaborações: 
   - Relatório

2. Classe: Cliente
   Responsabilidades: 
   - Realizar pedidos de comida.  
   - Acompanhar o progresso dos seus pedidos.  
   - Cancelar pedidos antes que o preparo seja iniciado.  
   - Consultar o cardápio disponível.
     
   Colaborações:  
   - Entregador  
   - Pedido  
   - Cardápio
      
3. Classe: Entregador
   Responsabilidades:
   - Receber novo pedido
   - Observar endereço
   - Marcar o pedido como “entregue”.
   Colaborações:
   - Cliente
   - Pedido

4. Classe: Chef de Cozinha
   Responsabilidades:
   - Vizualisar os pedidos dos clientes.
   - Preparar os pedidos dos clientes.
   - Informar que o pedido está “pronto para entrega”.
   Colaborações:
   - Cliente
   - Pedido
     
7. Classe: Pedido
   Responsabilidades:
   - Registrar as informações dos pedidos de cada cliente.
   - Apagar pedidos que forem cancelados
   Colaborações:
   - Dono
   - Cliente
   - Cozinheiro
   - Relatório
   - Entregador

8. Classe: Relatório
   Responsabilidades:
   - Registrar informações das vendas realizadas.
   - Calcular os lucros e as despesas do restaurante.
   Colaborações:
   - Pedido

9. Classe: Cardápio
   Colaborações :
   - Mostrar os itens disponíveis no menu.
