/* "Anotações" sobre o capítulo de ponteiros do livro.*/

#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
	char nome[30];
	int idade;
};

// adiciona 20 anos à idade
void alteracao_idade(struct Pessoa *acesso)  {
	acesso -> idade += 20;
}

int main() {
	// char e strings + ponteiros
	char s[] = "UFRGS";
	char *ptr = s; // ptr aponta para &s[0] – endereço do primeiro
	char frase[20] = "Teste de frase";
	char *ptr_str;
	
	ptr_str = frase;
	
	printf("%c \n", *(ptr + 1)); // aponta para f	
	printf("%c \n", *(ptr + 3)); // aponta para G	
	//printf("%c \n", *ptr_str); // frase[0]
	printf("A frase da variável do ponteiro é: "); // frase[0]
	
	while(*ptr_str) {
		putchar(*ptr_str);
		// <3 aritmética de ponteiros
		*ptr_str++;
	}
		
	// apenas para melhor formatação no terminal
	printf("\n");
	
	// estruturas e ponteiros
	struct Pessoa acesso;
	printf("Nome: ");
	scanf("%s", &acesso.nome);
	
	printf("Idade: ");
	scanf("%d", &acesso.idade);
	
	printf("\nDados iniciais: \n");
	printf("Nome: %s \n", acesso.nome);
	printf("Idade: %d \n", acesso.idade);
	
	alteracao_idade(&acesso);
	
	printf("\nDados apos mudanças: \n");
	printf("Nome: %s \n", acesso.nome);
	printf("Idade: %d \n", acesso.idade);	
	
	// apenas para melhor formatação no terminal
	printf("\n");
		
	// nao entendi bem a parte 8.1.8 - cópia de string
	
	// vetores de ponteiros
	// repare o indicador de final de vetor / dia é um ponteiro para uma string 
	char *dia[] = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado", 0}; 
	
	//**ptr_dia é um ponteiro para um ponteiro para uma string 
	char **ptr_dia; 
	
	ptr_dia = dia;
	
	while(*ptr_dia) {
		printf("%s \n", *ptr_dia);
		// <3 aritmética de ponteiros
		*ptr_dia++;		
	}
	
	return 0;
}
