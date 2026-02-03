#include <stdio.h>
int main ()
{
float ap,lp,aa,la,r1,r2;
printf("Digite a largura do azulejo (cm): ");
scanf ("%f",&la);
printf("Digite a altura do azulejo (cm): ");
scanf ("%f",&aa);
printf("Digite a largura da parede (cm): ");
scanf ("%f",&lp);
printf("Digite a altura da parede (cm): ");
scanf ("%f",&ap);
la=la/100;
aa=aa/100;
r1=la*aa;
r2=lp*ap;
r1=r1/r2;
printf("O A quantidade de azulejos nescessaria e de %3.2f",r1);
return 0;
}
//falhou

