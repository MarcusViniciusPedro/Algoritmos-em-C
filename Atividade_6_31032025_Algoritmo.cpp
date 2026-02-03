#include <stdio.h>

int main (){
	
	float P, V, T, TEM;
	
	printf("insira o valor de V: ");
	scanf("%f", &V);
	printf("insira o valor de T: ");
	scanf("%f", &T);
	printf("insira o valor de TEM: ");
	scanf("%f", &TEM);
	
	P = V + (V * (T / 100) * TEM);
	
	printf ("O valor da Prestacao(P) e:\n %f", P);
	
	return 0;
}
