#include <stdio.h>

int main (){
	
	int X, Y, V;
	
	printf("Indique um numero inteiro:\n ");
	scanf("%i", &X);
	
	for (Y = 1; Y <= 10; ++Y){
		
		V = Y * X;
		printf("\n%i X %i: %i\n", X, Y, V);
	}
	return 0;
}
