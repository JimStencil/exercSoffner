#include <stdio.h>

typedef struct Pessoa {
	int telefone;
	char nome[30];
	char email[30];
} PESSOA;


void menu() {
	printf("\nEscolha alguma das opções seguintes:");	
	printf("\nDigite 1 para o telefone");	
	printf("\nDigite 2 para o nome");	
	printf("\nDigite 3 para o email");	
	printf("\nDigite 4 para inserir os dados de uma pessoa");	
	printf("\nDigite 5 para ler os dados da pessoa inserida");	
	printf("\nDigite 6 para sair\n");	
}

void ler_pessoa(PESSOA *pessoa) {
	printf("Digite o nome: ");	
	scanf("%s", pessoa->nome);	
	//fgets(pessoa->nome, sizeof(*pessoa->nome), stdin);	
	printf("Digite o telefone: ");	
	scanf("%d", &pessoa->telefone);	
	printf("Digite o email: ");	
	scanf("%s", &pessoa->email);	
}

void mostrar_pessoa(PESSOA pessoa) {
	printf("%s \n", pessoa.nome);	
	printf("%d \n", pessoa.telefone);	
	printf("%s \n", pessoa.email);	
}

int main() {
	PESSOA pessoa1 = {545446, "Jonas", "jonas@teste.com"};
	PESSOA pessoa2 = {};
	int entrada = 0;
	
	do {
		menu();
		scanf("%d", &entrada);
		switch(entrada) {
			case 1:
				printf("%d \n", pessoa1.telefone);
				break;
			case 2:
				printf("%s \n", pessoa1.nome);
				break;
			case 3:
				printf("%s \n", pessoa1.email);
				break;
			case 4:
				ler_pessoa(&pessoa2);
				break;
			case 5:
				mostrar_pessoa(pessoa2);
				break;
		}		
	} while(entrada != 6);
	
	return 0;
}
