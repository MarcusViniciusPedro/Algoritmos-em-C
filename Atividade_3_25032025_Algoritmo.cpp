#include <stdio.h>
#include <math.h>

int main(){
	
	float R, A, V;
	
	printf("Entre com o valor do raio: ");
	scanf("%f", &R);
	printf("Entre com o valor da altura: ");
	scanf("%f", &A);
	
	V = M_PI * R * R * A;
	
	printf("O valor do volume e:\n %.2f", V);
	
	return 0;
}
