#include <stdio.h>

int main (){
	
	int N1, N2;
	
	printf("Insira dois numeros inteiro:\n ");
	scanf("%i %i", &N1, &N2);
	printf("Os numeros divisiveis por 4 ou 5 sao:\n");
	
    if(N1 % 4 == 0 || N1 % 5 == 0)
	   printf("%i\n", N1);
	if(N2 % 4 == 0 || N2 % 5 == 0)
	   printf("%i\n", N2);
	else
	   printf("\nNenhum dos dois numeros e divisivel por 4 ou 5.\n");
	   
	return 0;
}


