#include <stdio.h>
#include <conio.h>

int main (){
	
	int X, Y, V;
	
	printf("Indique um numero entre 1 e 10:\n ");
	scanf("%i", &X);
	
	for (Y = 1; Y <= 10; ++Y){
		
		V = Y * X;
		printf("\nResultado: %i\n", V);
	}
	return 0;
}
