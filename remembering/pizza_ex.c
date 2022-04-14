#include <stdio.h>
#include <stdlib.h>


typedef struct {
	int code;
	char clientName[20];
	char pizzaFlavor[10];
	char pizzaFlavor2[10];
	float price;
	struct Order *previousOrder;
} Order;



Order show_orders(Order *o1, Order *o2) {
	Order *aux;
	printf("\nNumero pedido: %d", o1->code);
	printf("\nNome do cliente: %s", o1->clientName);
	printf("\nSabor 1: %s", o1->pizzaFlavor);
	printf("\nSabor 2: %s", o1->pizzaFlavor2);
	printf("\nPreco: %.2f", o1->price);
	
	printf("\n\nNumero pedido: %d", o2->code);
	printf("\nNome do cliente: %s", o2->clientName);
	printf("\nSabor 1: %s", o2->pizzaFlavor);
	printf("\nSabor 2: %s", o2->pizzaFlavor2);
	printf("\nPreco: %.2f", o2->price);
	aux = o2->previousOrder;
	printf("\nPedido anterior: %d", aux->code);
}

void free_orders(Order *o1, Order *o2) {
	free(o1);
	free(o2);
}


void main(){
	Order *o1 = NULL, *o2 = NULL;
	
	printf("Bem vindo! Vamos comecar!");
	o1 = malloc(sizeof(Order));
	printf("\nNome do cliente: ");
	scanf("%s", o1->clientName);
	printf("\nSabor 1: ");
	scanf("%s", o1->pizzaFlavor);
	printf("\nSabor 2: ");
	scanf("%s", o1->pizzaFlavor2);
	printf("\nInsira o preco: ");
	scanf("%f", &o1->price);
	o1->code = 1;
	o1->previousOrder = NULL;
	
	o2 = malloc(sizeof(Order));
	printf("\nNome do cliente: ");
	scanf("%s", o2->clientName);
	printf("\nSabor 1: ");
	scanf("%s", o2->pizzaFlavor);
	printf("\nSabor 2: ");
	scanf("%s", o2->pizzaFlavor2);
	printf("\nInsira o preco: ");
	scanf("%f", &o2->price);
	o2->code = 2;
	o2->previousOrder = o1;
	
	show_orders(o1, o2);
	free_orders(o1, o2);
}