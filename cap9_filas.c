#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Um exemplo de estrutura fila:
typedef struct sPessoa {
	int Idade;
	char Nome[30];
	struct sPessoa *Proximo; // ptr para proximo elemento
} PESSOA;

typedef PESSOA * FILA;

// funções de iniciar e inserir
void Inic(FILA * Fila) {
	*Fila = NULL;
}

void Inserir(FILA * Fila, int Idade, char * Nome) {
	if(*Fila == NULL) {
		*Fila = (FILA)malloc(sizeof(PESSOA));
		if(*Fila == NULL) return;
		(*Fila)->Idade = Idade;
		strcpy((*Fila)->Nome, Nome);
		(**Fila).Proximo = NULL;
	} else {
		Inserir(&(**Fila).Proximo, Idade, Nome);
	}
}

int main() {
	FILA F;
	printf("Iniciando fila ... \n");
	Inic(&F);
	printf("Inserindo elemento ... \n");
	Inserir(&F, 25, "Jonas");
	printf("O elemento inserido é %s \n\n", F->Nome);
	return 0;	
}
