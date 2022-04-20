#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nomeCliente[50];
	int acai;
	int	tapioca;
} Pedido;

void mostraPedido(Pedido *p) {
	char tapioca[20], acai[20];
	
	if (p->acai == -1) {
		strcpy(acai, "Nao comprado");
	} else if (p->acai == 1) {
		strcpy(acai, "300ml");
	} else if (p->acai == 2) {
		strcpy(acai, "500ml");
	} else if (p->acai == 3) {
		strcpy(acai, "700ml");
	}
	
	if (p->tapioca == -1) {
		strcpy(tapioca, "Nao comprado");
	} else if (p->tapioca == 10) {
		strcpy(tapioca, "Frango");
	} else if (p->tapioca == 20) {
		strcpy(tapioca, "Peito de Peru");
	}
	printf("Pedido do cliente: %s\n", p->nomeCliente);
	printf("Codigo acai: %d | que informa: %s\n", p->acai, acai);
	printf("Codigo Tapioca: %d | que informa: %s \n\n", p->tapioca, tapioca);
}

int main() {
	Pedido *p1, *p2;

	p1 = malloc(sizeof(Pedido));
	strcpy(p1->nomeCliente, "Carlitos");
	p1->acai = 1;
	p1->tapioca = 20;
	mostraPedido(p1);
		
	p2 = malloc(sizeof(Pedido));
	strcpy(p2->nomeCliente, "Jonas");
	p2->acai = -1;
	p2->tapioca = 10;
	mostraPedido(p2);
	
	
	free(p1);
	free(p2);
	return 0;
}