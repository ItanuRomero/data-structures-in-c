#include <stdio.h>

int main()
{
    int menor;
    int maior;
    int num;
    for ( int counter = 0; counter < 16; counter++ ) {
        printf("Escreva um número: ");
        if (counter == 0) {
            scanf("%d", &menor);
            maior = menor;
        } else {
            scanf("%d", &num);
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }
    }
    printf("O menor: %d, o maior: %d", menor, maior);

    return 0;
}