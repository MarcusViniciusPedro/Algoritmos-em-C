#include <stdio.h>

int main () {
		
		int a[6], b[6], i, x;
		
		printf("Entre com um numero:\n");
		
		for (i = 0; i <= 5; ++i){
			printf("O numero %i:", i + 1);
			scanf("%i", &a[i]);
			b[i] = 1;
			
			for (x = 1; x <= a[i]; ++x){
				b[i] = b[i] * x;
			}
		}
		printf("\nA matriz B e:\n ");
		
		for (i = 0; i <= 5; ++i){
			printf("O numero %i: %i\n", i + 1, b[i]);
		}
		return 0;
}
