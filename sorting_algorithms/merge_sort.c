#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

void print_vector(int array[]) {
	int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d | ", array[i]);
    }
    printf("fim\n");
}


void merge(int vetor[], int start, int middle, int end) {
    int com1 = start, com2 = middle + 1, comAux = 0, tam = end - start + 1;
    
	int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= middle && com2 <= end){
		if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= middle){  //Caso ainda haja elementos na primeira metade
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= end) {   //Caso ainda haja elementos na segunda metade
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = start; comAux <= end; comAux++){    //Move os elementos de volta para o vetor original
        vetor[comAux] = vetAux[comAux - start];
    }
    
    free(vetAux);
}

void mergeSort(int vector[], int start, int end){
    if (start < end) {
        int middle = (end + start)/2;

        mergeSort(vector, start, middle);
        mergeSort(vector, middle + 1, end);
        merge(vector, start, middle, end);
    }
}

void main(){
	int vet[SIZE] = {8, 5, 2, 7, 1, 6, 9, 3};
	int start = 0, end = 7;
	
	print_vector(vet);

	mergeSort(vet, start, end);
	
	print_vector(vet);

}
