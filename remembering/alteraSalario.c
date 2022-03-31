#include <stdio.h>

void alteraSalario(float *salario, int atingiuMeta) {
	if (atingiuMeta != 0) {
		*salario = *salario * 1.2;
	}
}

int main() {
	typedef struct {
		float salario;
		int atingiuMeta;
	} Funcionario;
	
	Funcionario fulano;
	
	printf("Digite o salario: ");
	scanf("%f", &fulano.salario);
	printf("\nBateu a meta? (Sim = 1 | Nao = 0): ");
	scanf("%d", &fulano.atingiuMeta);
	
	alteraSalario(&fulano.salario, fulano.atingiuMeta);
	
	printf("\nSalario do fulano: %.2f\nBateu a meta: %d\n", fulano.salario, fulano.atingiuMeta);
	
	
	return 0;
}