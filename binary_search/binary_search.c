#include <stdio.h>

#define SIZE 16

int binary_search(int size, int list[SIZE], int element, int *found) {
	int start = 0, middle, end = 15, times = 0;
	while (*found == 0) {
		times++;
		middle = (start + end) / 2;

		printf("Start & end: %d -> %d\n", start, end);
		printf("List middle: %d\n", list[middle]);

		if (list[middle] == element) {
			printf("\nFound on position: %d\n", middle);
			*found = 1;
		} else if (element > list[middle]) {
			start = middle + 1;
		} else if (element < list[middle]) {
			end = middle - 1;
		} else {
			break;
		}
	}
	return times;
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
	int element, times, *found;
	int list[SIZE] = {1, 2, 3, 5, 12, 14, 15, 21, 24, 45, 46, 47, 53, 86, 90, 98};

	printf("Given the array: ");
	print_vector(SIZE, list);
	printf("What number do you wanna search? ");
	scanf("%d", &element);
	printf("\n");
	
	times = binary_search(SIZE, list, element, &found);
	if (found == 0) {
		printf("\n404 - Not found\n");
	}
	printf("\nRunned for %d times\n", times);
	
	return 0;
}

