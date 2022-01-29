#include <stdio.h>
#include "vectorfinder.h"

int main(void) {
  
  int count;
  printf("Vector finder versão - %2.f\n", versao);
  printf("Escreva quantos valores terão este vetor\n");
  scanf("%d", &count);
  int vetor[count];

  printf("Insira os valores");
  for(int i = 0; i < count; i++){
    scanf("%d", &vetor[i]);
  }

  printf("Menor valor: %d\n", findMenor(vetor, count - 1, vetor[count-1]));
  printf("Maior valor: %d\n", findMaior(vetor, count - 1, vetor[count-1]));

  return 0;
}