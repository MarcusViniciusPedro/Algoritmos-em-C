#include <stdio.h>
int main ()
{
float area,comp,raio;
printf("Digite o raio da circunferencia: ");
scanf ("%f",&raio);
area=3.1416*(raio*raio);
printf("A area do circulo e: %3.2f",area);
comp=2*3.1416*raio;
printf("\nO comprimento do circulo e: %3.2f",comp);
return 0;
}
