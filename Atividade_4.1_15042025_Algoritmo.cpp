#include <stdio.h>

int main () {
	
	int A[5];
	int B[5];
	int C[10];	
	int i;
	
	for (i = 0; i <= 4; ++i){
		printf("\nDigite 5 valores:");
		scanf("%i", &A[i]);
		C[i] = A[i];
		printf("\n %5.2i", C[i]);
	}
	for (i = 5; i <= 9; ++i){
		printf("\nDigite mais 5 valores: ");
		scanf("%i", &B[i]);
	}
	for(i = 0; i <= 9; ++i){
		printf("\n %5.2i", C[i]);
	}
	return 0;
}
