#include<stdio.h>
#include<math.h>

int main(){
	
	float s0, v0, a, t, s;
	
	printf("Insira o valor de s0: ");
	scanf("%f", &s0);
	printf("Insira o valor de v0: ");
	scanf("%f", &v0);
	printf("Insira o valor de a: ");
	scanf("%f", &a);
	printf("Insira o valor de t: ");
	scanf("%f", &t);
	
	s = s0 + v0 * t + 1.0 / 2.0 * a * pow(t, 2); //Calculo do movimento uniforme
		
	printf("O valor de s e:\n %.2f", s);
	
	return 0;	
}
