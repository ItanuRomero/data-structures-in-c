#include <stdio.h>

#define SIZE 10

void print_vector(int array[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d | ", array[i]);
    }
    printf("fim\n");
}


void quicksort(int vector[SIZE], int inicio, int fim){
   
	int pivo, aux, i, j, meio;
   
	i = inicio;
	j = fim;
   
	meio = (int) ((i + j) / 2);
	pivo = vector[meio];
   
	do{
		while (vector[i] < pivo) i = i + 1;
		while (vector[j] > pivo) j = j - 1;
      
		if(i <= j){
			aux = vector[i];
			vector[i] = vector[j];
			vector[j] = aux;
			i = i + 1;
			j = j - 1;
		}
	} while(j > i);
   
	if (inicio < j) {
        quicksort(vector, inicio, j);
	}
	if (i < fim) {
		quicksort(vector, i, fim);	
	}

}

int main(){
   
   int vector[SIZE] = {7, 9, 4, 3, 6, 1, 18, 2, 10, 5};
   
   int i;   
   print_vector(vector, SIZE);
   
   quicksort(vector, 0, SIZE - 1);
   
   print_vector(vector, SIZE);
   return 0;
}
