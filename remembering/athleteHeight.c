#include <stdio.h>

int main()
{
    float altura;
    float soma;
    float media;
    int maioresQue1EMeio;
    maioresQue1EMeio = 0;
    soma = 0;
    for ( int counter = 0; counter < 8; counter++ ) {
        printf("Altura do atleta: ");
        scanf("%f", &altura);
        soma = soma + altura;
        if (altura > 1.5) {
            maioresQue1EMeio = maioresQue1EMeio + 1;
        }
    }
    media = soma / 8;
    printf("Media: %f, Maiores que 1 e meio: %d", media, maioresQue1EMeio);

    return 0;
}