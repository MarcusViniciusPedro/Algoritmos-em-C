#include <stdio.h>

int main (){
	
	int N1, N2, N3;
	
	printf("\nInsira tres numeros inteiro:\n ");
	scanf("%i %i %i", &N1, &N2, &N3);
	printf("Os numeros divisiveis por 2 e 3 sao:\n");
	
	if (N1 % 6 == 0)
	   printf("%i\n", N1);
	
	if (N2 % 6 == 0)
	   printf("%i\n", N2);
	   
	else (N3 % 6 == 0)
	   printf("%i\n", N3);

	return 0;
}
