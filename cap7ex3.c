#include <stdio.h>

typedef struct Pessoa {
	int telefone;
	char nome[30];
	char email[30];
} PESSOA;


void menu() {
	printf("Escolha alguma das opções seguintes:");	
	printf("\nDigite 1 para o telefone");	
	printf("\nDigite 2 para o nome");	
	printf("\nDigite 3 para o email");	
	printf("\nDigite 4 sair\n");	
}

int main() {
	PESSOA pessoa1 = {545446, "Jonas", "jonas@teste.com"};
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
				break;
		}		
	} while(entrada != 4);
	
	return 0;
}
