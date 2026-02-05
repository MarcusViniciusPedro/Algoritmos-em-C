#include <stdio.h>
#include <conio.h>

int main (){
	
	int X, soma = 0;
	
	for (X = 1; X <= 20; ++X){
		
		soma = soma + X;
		printf("\nA soma e:%i\n", soma);
	}
	return 0;
}
