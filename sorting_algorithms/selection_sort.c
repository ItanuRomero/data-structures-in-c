#include <stdio.h>

#define SIZE 10

void print_vector(int array[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d | ", array[i]);
    }
    printf("fim\n");
}

void selection_sort(int vet[], int size) {
	int fixed, position, aux, smaller, smaller_position;
	for(fixed = 0; fixed < size - 1; fixed++) {
		smaller = vet[fixed];
		smaller_position = fixed;
		for(position = fixed; position < size; position++) {
			if (vet[position] < smaller) {
				smaller = vet[position];
				smaller_position = position;
			}
		}
		if (smaller_position != fixed) {
			aux = vet[fixed];
			vet[fixed] = vet[smaller_position];
			vet[smaller_position] = aux;
		}
		print_vector(vet, SIZE);
	}
}


int main() {
    int array[] = {23, 4, 67, -8, -5, 54, 21, 87, 2, -7};
    int positions = SIZE, continueTo, cache, num;
    print_vector(array, SIZE);
    selection_sort(array, SIZE);
    
    
    return 0;
}