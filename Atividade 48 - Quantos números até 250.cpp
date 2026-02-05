#include <stdio.h>

int main(){
	
	int n;
	
	printf ("\ndigite um numero menor ou igual a 50: ");
	scanf( "%i", &n);
	
	do{
		printf("\n %i", n);
		n = n * 3; //multiplica o valor dado pelo usuário por 3 até que o valor alcance ou seja um pouco menor que 250
	}
	
	while (n < 250);
	
	return 0;
}

