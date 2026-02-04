#include <stdio.h>

int main(){
	
	int I;
	
	printf("Insira um numero inteiro(I): ");
	scanf("%i", &I);
	
	if(I > 0)
	   printf("O valor positivo e: %i", I);
	else{
	   I = I * -1;
	   printf("O valor positivo e: %i", I);
    }
    return 0;
}
