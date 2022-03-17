#include <stdio.h>

#define SIZE 10

void print_vector(int array[]) {
	int i;
    for (i = 0; i < SIZE; i++) {
        printf("%d | ", array[i]);
    }
    printf("fim\n");
}

void insert_sort(int vet[]) {
	int number, counter, position;
	for (counter = 1; counter < SIZE; counter++) {
		number = vet[counter];
		for (position = counter - 1; position >= 0; position--) {
			if (number < vet[position]) {
				vet[position + 1] = vet[position];
				vet[position] = number;
			} else {
				break;
			}
		}
		print_vector(vet);
	}
}

int main() { 
    int array[] = {23, 4, 67, -8, -5, 54, 21, 87, 2, -7};
    print_vector(array);
    insert_sort(array);
    
    return 0;
}