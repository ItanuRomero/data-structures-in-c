#include <stdio.h>
#define SIZE 10

void print_vector(int array[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d | ", array[i]);
    }
    printf("fim\n");
}

int main() {
    int array[] = {23, 4, 67, -8, 90, 54, 21, 87, 2, -7};
    int positions = SIZE, continueTo, cache, num;
    print_vector(array, SIZE);
    do {
        continueTo = 0;
        for (num = 0; num < positions; num++) {
            if (array[num] > array[num+1]) {
                cache = array[num];
                array[num] = array[num+1];
                array[num+1] = cache;
                continueTo = num;
            }
        }
        positions--;
        print_vector(array, SIZE);
    } while (continueTo != 0);
    
    return 0;
}
