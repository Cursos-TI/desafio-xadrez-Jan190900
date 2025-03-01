#include <stdio.h>

int main() {
    int i;

  // Mover a torre 5 casas a direita
  printf("Movimento da torre:\n");
  for (i = 1; i <= 5; i++) {
      printf("Passo %d: Direita\n", i);
  }
  printf("\n");

  //Mover o bispo 5 casas a diagonal para cima e à direita
  printf("Movimento do bispo:\n");
  i = 1;
  while (i <= 5) {
      printf("Passo %d: Cima, Direita\n", i);
      i++;
  }
  printf("\n");

  //Mover a rainha 8 casas a esquerda
  printf("Movimento da rainha:\n");
  i = 1;
  do {
      printf("Passo %d: Esquerda\n", i);
      i++;
  } while (i <= 8);
  printf("\n");
    
  return 0;
}
  
   

