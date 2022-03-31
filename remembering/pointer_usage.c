#include <stdio.h>

int main() {
	int varA = 40;
	int varB = 0;
	int *ptrA = NULL;
	int *ptrB = NULL;
	
	printf("Endereço varA: %d\n", &varA);
	printf("Endereço varB: %d\n", &varB);
	printf("Endereço ptrA: %d\n", &ptrA);
	printf("Endereço ptrB: %d\n", &ptrB);
	
	printf("Valor varA: %d\n", varA);
	printf("Valor varB: %d\n", varB);
	printf("Valor ptrA: %d\n", ptrA);
	printf("Valor ptrB: %d\n", ptrB);
	
	ptrA = &varA;
	ptrB = &varB;
	*ptrA = 30;
	*ptrB = 45;
	
	printf("Endereço varA: %d\n", &varA);
	printf("Endereço varB: %d\n", &varB);
	printf("Endereço ptrA: %d\n", &ptrA);
	printf("Endereço ptrB: %d\n", &ptrB);
	
	printf("Valor varA: %d\n", varA);
	printf("Valor varB: %d\n", varB);
	printf("Valor ptrA: %d\n", ptrA);
	printf("Valor ptrB: %d\n", ptrB);
	
	return 0;
}