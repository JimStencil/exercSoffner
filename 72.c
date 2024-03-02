#include <stdio.h>

typedef struct Carro {
	int ano;
	float preco;
	char marca[30];
	char cor[30];
} CARRO;

int main() {
	CARRO carro;
	printf("Qual o ano de fabricação? ");
	scanf("%d", &carro.ano);
	printf("\nQual a marca? ");
	scanf("%s", carro.marca);
	printf("\nQual o preço do carro? ");
	scanf("%f", &carro.preco);
	printf("\nQual a cor do carro? ");
	scanf("%s", carro.cor);
	
	printf("\nOs dados do carro são:");
	printf("\nMarca: %s", carro.marca);
	printf("\nAno: %d", carro.ano);
	printf("\nPreço: %.2f", carro.preco);
	printf("\ncor: %s\n", carro.cor);
	
	return 0;
}
