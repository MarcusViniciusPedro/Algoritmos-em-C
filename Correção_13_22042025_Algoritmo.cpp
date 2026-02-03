#include <stdio.h>
#define S0 2.0
#define V0 3.0
#define A 10.0
int main ()
{
float s,tempo;
printf("Digite o tempo (segundos): ");
scanf ("%f",&tempo);
 s=(S0+V0)*tempo+((1/2)*A*(tempo*tempo));
printf("O valor do movimento uniforme variado e: %d",s);
return 0;
}
//falhou
