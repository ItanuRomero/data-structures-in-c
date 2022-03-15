#include <stdio.h>

#define SIZE 16

int binary_search(int size, int list[SIZE], int element, int start, int end, int *times) {
	int middle;
	*times++;
	middle = (start + end) / 2;
	
	if (start > end) {
		return -1;
	} else if (list[middle] == element) {
		return middle;
	} else if (element > list[middle]) {
		return binary_search(SIZE, list, element, start + 1, end, &times);
	} else if (element < list[middle]) {
		return binary_search(SIZE, list, element, start, end - 1, &times);
	}
}

void print_vector(int size, int vector[SIZE]) {
	int i;
	printf("[");
	for (i = 0; i < size; i++) {
		printf("%d, ", vector[i]);
	}
	printf("]\n");
}

int main() {
	int element, *times, found;
	int list[SIZE] = {1, 2, 3, 5, 12, 14, 15, 21, 24, 45, 46, 47, 53, 86, 90, 98};
	
	printf("Dado o array: ");
	print_vector(SIZE, list);
	printf("Qual numero deseja procurar? ");
	scanf("%d", &element);
	printf("\n");
	
	found = binary_search(SIZE, list, element, 0, SIZE - 1, &times);
	if (found < 0)  {
		printf("Nao encontrado.");
		printf("\nForam feitas %d buscas.\n", *times);
	} else {
		printf("\nEncontrado na posicao: %d\n", found);
		printf("\nForam feitas %d buscas.\n", *times);
	}
}
