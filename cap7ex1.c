#include <stdio.h>

struct Funcionario	 {
	int registro;
	float salario;
	char nome[30];
}

main() {
	struct Funcionario f1;
	printf("Qual o nome do funcionario? ");
	scanf("%s", f1.nome);
	printf("\nQual o registro do funcionario? ");
	scanf("%d", &f1.registro);
	printf("\nQual o salario do funcionario? ");
	scanf("%f", &f1.salario);
	
	printf("\nOs dados do funcionario são:");
	printf("\nNome: %s", f1.nome);
	printf("\nRegistro: %d", f1.registro);
	printf("\nSalario: %.2f\n", f1.salario);
}
