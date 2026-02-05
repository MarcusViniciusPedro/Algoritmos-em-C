#include <stdio.h>

int main () {
	
	int I, x;
	int a[6], b[6];
	
	printf("Entre com os numeros(6) do vetor:\n");
	
	for(I = 0; I <= 5; ++I){
		printf("Numero %i: ", I + 1);
		scanf("%i", &a[I]);
		b[I] = 1;
	}
	for(x = 1; x <= a[I]; --x){
	    b[I] = b[I] * x;
    }
    printf("A matriz b e:\n");
    for(I = 0; I <= 5; ++I){
	
	printf("Numero %i: %i\n", I + 1, b[I]);
    }
	return 0;
}
