#include <stdio.h>

int main (){

 int a,b;

 printf("Digite o valor A: ");
 scanf ("%d",&a);
 printf("Digite o valor B: ");
 scanf ("%d",&b);
 
 a=a+b;
 b=a-b;
 a=a-b;

 printf("Novo valor A: %d",a);

 printf("\nNovo valor B: %d",b);

 return 0;
}

