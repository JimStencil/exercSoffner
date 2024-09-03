/* anotações capitulo 12 - alg. e prog. em ling. c - Soffner */

#include <stdio.h>
  /* busca binaria, muito mais eficiente, considera que sempre
     é possivel dividir o conjunto de elementos em duas partes
     OBS: vetor tem de estar ordenado de forma crescente ou decrescente */
int busca_binaria (int vetor[], int valor, int tamanho)
{
  int achou = 0;
  int alto = tamanho, baixo = 0, meio;
  meio = (alto + baixo) / 2;

  while (!achou && alto >= baixo) {
    printf("Baixo = %d Meio =  %d Alto = %d\n", baixo, meio, alto);
    if (valor == vetor[meio]) achou = 1;
    else if (valor < vetor[meio]) alto = meio -1;
    else baixo = meio + 1;
    meio = (alto + baixo) / 2;
  }
  return (achou ? meio : -1 );
}


int main()
{

  int numeros[5] = {50, 20, 10, 70, 15};
  int i, valor, vetor[100];

  printf("Digite o valor a procurar: ");
  scanf("%d", &valor);
  
  /* busca sequencial, é uma busca ineficiente, conforme tiver
     muitos elementos no vetor */
  for (i = 0; i < 4; i++) {
    if (valor == numeros[i]) {
      printf("Valor %d  encontrado...\n", numeros[i]);
      i = 5;
    }
  }

  if (i != 5) printf("Valor não encontrado!\n");
  
  // implementa a busca binbária 

  for(int u = 0; u < 100; u++)
    vetor[u] = u;

  printf("Resultado da busca %d \n\n", busca_binaria(vetor, 33, 100));
  printf("Resultado da busca %d \n\n", busca_binaria(vetor, 75, 100));
  printf("Resultado da busca %d \n\n", busca_binaria(vetor, 1, 100));
  printf("Resultado da busca %d \n\n", busca_binaria(vetor, 1001,100));
  
  return 0;
  
}
