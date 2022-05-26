#include <stdio.h>
#include <stdlib.h>

#define SIZE 7
#define FINAL 10

typedef struct {
 int value;
 struct Value* next;
} Value;

int discoverPosition(int value) {
	return value % FINAL;
}

void print_vector(int size, int vector[FINAL]) {
	int i;
	printf("[");
	for (i = 0; i < size; i++) {
		printf("%d, ", vector[i]);
	}
	printf("]\n");
}

int main() {
	int vector[SIZE] = {19, 26, 33, 70, 79, 103, 110};
	int final[FINAL] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL}, i, position;
	Value* aux = (Value*) malloc(sizeof(Value));
	for (i = 0; i < SIZE; i++) {
		Value* v = (Value*) malloc(sizeof(Value));
		v->value = vector[i];
		
		position = discoverPosition(vector[i]);
		
		if (final[position] != NULL) {
			aux = final[position];
			aux->next = v;
		} else {
			final[position] = v;
		}
	}
	print_vector(FINAL, final);
	return 0;
}