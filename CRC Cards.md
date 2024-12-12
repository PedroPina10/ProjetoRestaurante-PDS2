
Cartões CRC:

1. Classe: Proprietário do Restaurante  
   Responsabilidades:  
   - Gerenciar os fornecedores registrados no sistema.  
   - Monitorar o status do estoque de cada item.  
   - Acessar relatórios de vendas e faturamento.  
   Colaborações: 
   - Relatório

2. Classe: Cliente
   Responsabilidades: 
   - Realizar pedidos de comida por meio do aplicativo.  
   - Acompanhar o progresso dos seus pedidos em tempo real.  
   - Cancelar pedidos antes que o preparo seja iniciado.  
   - Consultar o cardápio disponível.  
   Colaborações:  
   - Entregador  
   - Pedido  
   - Cardápio  
3. Classe: Entregador
Responsabilidades:
	•	Receber alertas sobre os pedidos pendentes de entrega.
	•	Observar os endereços e prazos de cada entrega.
	•	Marcar o pedido como “entregue”.
Colaborações:
	•	Consumidor
	•	Pedido

4. Classe: Chef de Cozinha
Responsabilidades:
	•	Preparar os pedidos conforme as preferências dos clientes.
	•	Atualizar no sistema a disponibilidade dos ingredientes.
	•	Informar que o pedido está “pronto para entrega”.
Colaborações:
	•	Consumidor
	•	Pedido
5. Classe: Pedido
Responsabilidades:
	•	Registrar as informações dos pedidos de cada cliente.
	•	Detalhar as especificações de cada pedido.
Colaborações:
	•	Proprietário do Restaurante
	•	Consumidor
	•	Chef de Cozinha
	•	Relatório
	•	Entregador

6. Classe: Relatório
Responsabilidades:
	•	Registrar informações das vendas realizadas.
	•	Calcular os lucros e as despesas do restaurante.
Colaborações:
	•	Pedido

7. Classe: Cardápio
Colaborações :
	•	Mostrar os itens disponíveis no menu.
