#include <stdio.h>

int main (){
	
	float C, Co;
	
	printf("insira o numero de coelhos(Co): ");
	scanf("%f", &Co);

	C = (Co * 0.70) / 18 + 10; //Formula para o cálculo do custo de criação de coelhos
	
	printf ("O numero de coelhos e:\n %.0f", Co);
	printf ("\nO valor do custo(C) de criacao de coelhos e:\n %f", C);
	
	return 0;
}

