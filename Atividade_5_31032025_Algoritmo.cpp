#include <stdio.h>
#include <math.h>

int main (){
	
	int I;
	
	printf("insira um numero Inteiro(I): ");
	scanf("%i", &I);
	
	I = pow(I, 2);
	
	printf ("O quadrado de I e:\n %i", I);
	
	return 0;
}
