#include <stdio.h>

int main (){
  
  float a,b,area,perimetro;

  printf("Digite a medida do lado A do retangulo: ");
  scanf ("%f",&a);
  printf("Digite a medida do lado B do retangulo: ");
  scanf ("%f",&b);

  area=(a*b); //Calculo da área
  
  printf("Area total do retangulo: %3.2f",area);
  
  perimetro=(2*a)+(2*b); //Calculo do Perimetro
  
  printf("\nPerimetro do Retangulo: %3.2f",perimetro);

  return 0;
}

