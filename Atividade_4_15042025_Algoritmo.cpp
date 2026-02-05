#include <stdio.h>

int main (){
	
	int a[5], b[5], c[10], i;
	
	printf("Digite os dados da primeira matriz:\n");
	for (i = 0; i <= 4; ++i){
		printf("Numero %i: ", i + 1);
		scanf("%i", &a[i]);
		c[i] = a[i];
	}
	
	printf("Digite os dados da segunda matriz:\n");
	for (i = 0; i <= 4; ++i){
		printf("Numero %i: ", i + 1);
		scanf("%i", &b[i]);
		c[i + 5] = b[i];
    }
    
    printf("A matriz C e:\n");
    for (i = 0; i <= 9; ++i){
    	printf("Numero %i: %i\n", i + 1, c[i]);
	}
	return 0;
}
