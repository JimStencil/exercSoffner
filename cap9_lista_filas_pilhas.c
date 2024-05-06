#include <stdio.h>
#include <stdlib.h>

// Uma estrutura lista ligada ou encadeada seria:

struct Lista {
	int valor;
	struct Lista *proximo; // ptr para proximo elemento
}

// funções da lista
// função para inserir
lista_insercao(struct Lista *inicio, int i) {
	inicio = (struct Lista *)malloc(sizeof(struct Lista));
	inicio -> valor = i;
	inicio -> proximo = NULL;
	return inicio;
}

// função para inserir no inicio
struct Lista *insere_inicio(struct Lista *n, int x) {
	struct Lista *novo;
	if(n == NULL) { // caso lista esteja vazia
		n = (struct Lista *)malloc(sizeof(struct Lista));
		n -> valor = x;
		n -> proximo = NULL;
	} else {
		novo = (struct Lista *)malloc(sizeof(struct Lista));
		novo -> valor = x;
		n -> proximo = n;
	}
	return novo;
}

// função para inserir no final
struct Lista *insere_final(struct Lista *n, int x) {
	struct Lista *novo = (struct Lista *)malloc(sizeof(struct Lista));
	novo -> valor = x;
	if(n == NULL) { // caso lista esteja vazia
		novo -> proximo = NULL;
		return novo;
	} else {
		struct Lista *temp = n; // criando referência ao primeiro nó
		while(temp -> proximo != NULL){ // indo ao ultimo nó
			temp = temp -> proximo;
		}
 		novo -> proximo = NULL;
		temp -> proximo = novo;
	}
	return n;
}


main() {
	struct Lista *inicio = NULL;
	
	if(inicio == NULL) {
		printf("Criando lista...\n");
		inicio = (struct Lista*)malloc(sizeof(struct Lista)); 
		printf("Lista criada...\n");
		
		if(inicio != NULL) { 
			inicio->valor = 100;
			inicio->proximo = NULL;
		}
		printf("O valor da variável do primeiro nó é: %d \n", inicio -> valor);
	}
	//return 0;	
}
