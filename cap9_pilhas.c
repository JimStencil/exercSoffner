#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Um exemplo de estrutura pilha:
typedef struct sNo {
	int N;
	struct sNo *Proximo; // ptr para proximo elemento
} NO;

// funções de iniciar e inserir
void Inic(NO ** Pilha) {
	*Pilha = NULL;
}
// colocar elemento na pilha
void Push(NO ** Pilha, int Num) {
	NO * Tmp;
	Tmp = (NO*)malloc(sizeof(NO));
	if(Tmp == NULL) return;
	Tmp->N = Num;
	Tmp->Proximo = *Pilha;
	*Pilha = Tmp;
}

int Empty(NO * Pilha) {
	return (Pilha == NULL);
}
// tirar elemento da pilha
void Pop(NO ** Pilha) {
	NO * Tmp = *Pilha;
	if(Empty(*Pilha)) return;
	*Pilha = (*Pilha)->Proximo;
	free(Tmp);
}

void Print(NO * Pilha) {
	if(Empty(Pilha)) return;
	printf("%d \n", Pilha->N);
	Print(Pilha->Proximo);
}

int Top(NO * Pilha) {
	if(Empty(Pilha)) return -1;
	return Pilha->N;
}

int main() {
	NO * P;
	Inic(&P);
	printf("%s esta vazia \n", Empty(P) ? "" : "Nao");
	Print(P);
	puts("Push: 10");
	Push(&P, 10);
	puts("Push: 20");
	Push(&P, 20);
	puts("Push: 30");
	Push(&P, 30); 
	printf("%s esta vazia \n", Empty(P) ? "" : "Nao");
	Print(P);
	puts("Pop: ");
	Pop(&P);
	Print(P);
	puts("Pop: ");
	Pop(&P);
	Print(P);
	puts("Pop: ");
	Pop(&P);
	Print(P);
	printf("%s esta vazia \n", Empty(P) ? "" : "Nao");
}
