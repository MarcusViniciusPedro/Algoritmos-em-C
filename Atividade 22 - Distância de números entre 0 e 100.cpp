#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int num_digit, num_ch, D;

  printf("Digite um numero inteiro entre 0 e 100: ");
  scanf("%d", &num_digit);
  printf("Digite um numero-chave inteiro entre 0 e 100: ");
  scanf("%d", &num_ch);

  D = abs(num_ch - num_digit); //Realiza a subtração dos valores, o "abs" garantirá que a função possua, ao final da operação um valor absoluto/inteiro positivo
  printf("A distancia entre %d e %d e: %d\n", num_digit, num_ch, D);

  return 0;
}

