/* anotações capitulo 11 - alg. e prog. em ling. c - Soffner */
#include <stdio.h>
#include <stdlib.h>

// quicksort meio bagunçado
void quick_sort(int array[], int primeiro, int ultimo)
{
  int temp, baixo, alto, separador;
  baixo = primeiro;
  alto = ultimo;
  separador = array[(primeiro + ultimo) / 2];
  
  do {
    while (array[baixo] < separador) baixo++;

    while (array[alto] > separador) alto--;

    if (baixo <= alto) {
      temp = array[baixo];
      array[baixo++] = array[alto];
      array[alto--] = temp;
    }

  } while (baixo <= alto);

  if (primeiro < alto) quick_sort(array, primeiro, alto);
  if (baixo < ultimo)  quick_sort(array, baixo, ultimo);
}
    

int main()
{

  int vetor[5] = {50, 20, 30, 10, 60};
  int i, contador, auxiliar, ordenados = 0;

  // printando vetor antes de ordenar
  for (contador = 0; contador < 4; contador++) {
    printf(" %d ", vetor[contador]);
  }  
  
  // bubblesort nas cabeças
  while (ordenados == 0) {
    ordenados = 1;
    for (contador = 0; contador < 4; contador++) {
      if (vetor[contador] > vetor[contador + 1]) {
	auxiliar = vetor[contador];
	vetor[contador] = vetor[contador + 1];
	vetor[contador + 1] = auxiliar;
	ordenados = 0;
      }
    }
  }

  printf("\n");

  // após a transformação bubblesorteana
  for (contador = 0; contador < 4; contador++) {
    printf(" %d ", vetor[contador]);
  }
  
  printf("\n");

  int valores[40];
  
  for(int i = 0; i < 40; i++)
    valores[i] = rand() % 100;
  
  quick_sort(valores, 0, 39);

  for(int i = 0; i < 40; i++) {
    if (i % 10 == 0) printf("\n");
    
    printf("%d ", valores[i]);
  }

  printf("\n");

  return 0;
  
}
