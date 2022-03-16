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
	int position, number, aux, smaller, smaller_position;
	for(position = 0; position < size - 1; position++) {
		smaller = vet[position];
		smaller_position = position;
		for(number = position; number < size; number++) {
			if (vet[number] < smaller) {
				smaller = vet[number];
				smaller_position = number;
			}
		}
		if (smaller_position != position) {
			aux = vet[position];
			vet[position] = vet[smaller_position];
			vet[smaller_position] = aux;
		}
		print_vector(vet, SIZE);
	}
}


int main() {
    int array[] = {23, 4, 67, -8, 90, 54, 21, 87, 2, -7};
    int positions = SIZE, continueTo, cache, num;
    print_vector(array, SIZE);
    selection_sort(array, SIZE);
    
    
    return 0;
}