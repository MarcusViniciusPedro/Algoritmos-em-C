#include <stdio.h>

int main(){
	
	int n;
	
	printf ("\ndigite um numero menor ou igual a 50: ");
	scanf( "%i", &n);
	
	do{
		printf("\n %i", n);
		n = n * 3;
	}
	
	while (n < 250);
	
	return 0;
}
