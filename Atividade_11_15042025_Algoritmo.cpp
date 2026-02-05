#include <stdio.h>

int main () {
	
	int I, M, m;
	int n[5];
	
	printf("Entre com os numeros(5) do vetor:\n");
	
	for(I = 0; I < 5; ++I){
		printf("Numero %i: ", I + 1);
		scanf("%i", &n[I]);
	}
	M = m = n[0];
	
	for(I = 0; I < 5; ++I){
		if (n[I] > M){
			M = n[I];	
		}
		if (n[I] < m){
			m = n[I];	
		}
	}
	printf("\nO maior e menor valores sao respectivamente: \nMaior: %i \nMenor: %i ", M, m);
	
	return 0;
} 
