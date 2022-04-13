#include <stdio.h>

void main() {
	int number, result;
	printf("Insira o número para entregarmos o seu resultado fatorial: ");
	scanf("%d", &number);
	
	printf("\nRealizando de forma recursiva: \n");
	result = recursive_factorial(number);
	printf("Fatorial de %d: %d", number, result);
	
	printf("\nRealizando de forma interativa: \n");
	result = interactive_factorial(number);
	printf("Fatorial de %d: %d", number, result);
}

int recursive_factorial(int number) {
	if (number == 1) {
		return 1;
	}
	return number * recursive_factorial(number - 1);
}

int interactive_factorial(int number) {
	int i, result;
	result = 1;
	for (i = number; i > 0; i--) {
		result = result * i;
	}
	return result;
}
