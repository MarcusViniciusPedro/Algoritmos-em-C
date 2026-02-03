#include <stdio.h>
int main (){

 int a,b,aux;

 printf("Digite o valor A: ");
 scanf ("%d",&a);
 printf("Digite o valor B: ");
 scanf ("%d",&b);
 
 aux=a;
 a=b;
 b=aux; //É feita a troca dos vaalores de A e B com uma variável auxiliar

 printf("Novo valor A: %d",a);

 printf("\nNovo valor B: %d",b);

 return 0;
}

