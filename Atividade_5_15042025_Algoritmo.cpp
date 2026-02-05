#include <stdio.h>

int main (){
	
	int a[20], b[30], c[50], i;
	printf ("Digite os dados da primeira matriz\n");
	
	for (i = 0; i <= 19; ++i){
		printf("Numero %i: ", i + 1);
		scanf("%i", &a[i]);
		c[i] = a[i];
	}
	printf("Digite os dados da segunda matriz\n");
	
	for (i = 0; i <= 29; ++i){
		printf("Numero %i: ", i + 1);
		scanf("%i", &b[i]);
		c[i + 20] = b[i];
	}
	printf("A matriz C e:\n");
	
	for (i = 0; i <= 49; ++i){
	    printf("Numero %i: %i\n", i + 1, c[i]);
	}
	return 0;
	
}
