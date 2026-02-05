#include <stdio.h>

int main () {
	
	int I;
	int a[5], b[5];
	
	printf("Entre com os numeros(5) do vetor:\n");
	
	for(I = 0; I <= 4; ++I){
		printf("Numero %i: ", I + 1);
		scanf("%i", &a[I]);
	}
	printf("A matriz b e:\n");
	for(I = 0; I <= 4; ++I){
	b[I] = a[I] * 3;
	printf("Numero %i: %i\n", I + 1, b[I]);
    }
	return 0;
}
