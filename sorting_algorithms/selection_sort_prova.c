#include <stdio.h>
#define TAM 6

void imprimirVetor(int vet[]){
 int cont;
 printf("\nVETOR: ");
 for(cont = 0; cont <= TAM-1; cont++){
 printf(" %i ", vet[cont]);
 }
}

int main() {
	int vet[TAM] = {8, 2, 9, 1, 5, 3};

	imprimirVetor(vet);
	selectionSort(vet);
	imprimirVetor(vet); 
	
	return 0;
}


void selectionSort(int vet[]){ 
	int aux, i, j, smaller, position;
	for (i=0; i < TAM; i++) {
		for (j=i; j < TAM; j++) {
			if (j == i || vet[j] < smaller) {
				smaller = vet[j];
				position = j;
			}
		}
		aux = vet[i];
		vet[i] = smaller;
		vet[position] = aux;
	}
}