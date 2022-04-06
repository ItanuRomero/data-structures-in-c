#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    float peso, altura;
} Atleta;

void main() {
	int i;
	int size;
	
	Atleta *a[3];
	size = sizeof(Atleta);
	
	for (i = 0; i < 3; i++) {
		a[i] = malloc(size);
		printf("\n\nAtleta %d\n", i + 1);
		printf("Idade: ");
		scanf("%d", &a[i]->idade);
		printf("Peso: ");
		scanf("%f", &a[i]->peso);
		printf("Altura: ");
		scanf("%f", &a[i]->altura);
	}
	for (i = 0; i < 3; i++) {
		printf("\n\nAtleta %d\n", i + 1);
		printf("Idade: %d\n", a[i]->idade);
		printf("Peso: %f\n", a[i]->peso);
		printf("Altura: %f\n", a[i]->altura);
		free(a[i]);
	}		
}