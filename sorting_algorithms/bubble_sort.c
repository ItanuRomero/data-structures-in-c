#include <stdio.h>

void print_vector(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d | ", array[i]);
    }
    printf("fim\n");
}

int main() {
    int array[] = {23, 4, 67, -8, 90, 54, 21, 87, 2, -7};
    int positions = 10, continueTo, cache;
    print_vector(array, 10);
    do {
        continueTo = 0;
        for (int num = 0; num < positions; num++) {
            if (array[num] > array[num+1]) {
                cache = array[num];
                array[num] = array[num+1];
                array[num+1] = cache;
                continueTo = num;
            }
        }
        positions--;
        print_vector(array, 10);
    } while (continueTo != 0);
    
    return 0;
}
