#include <stdio.h>

int main() {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d par.\n", num);
  } 
  else {
    printf("%d impar.\n", num);
  }

  return 0;
}
