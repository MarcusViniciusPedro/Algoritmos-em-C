#include <stdio.h>

int main(){
	
	int I;
	
	printf("Insira um numero inteiro(I): ");
	scanf("%i", &I);
	
	if(I > 0) //Se o valor inteiro já for maior que 0, será apenas apresentado o valor como o usuário digitou
	   printf("O valor positivo e: %i", I);
	else{ //Se o valor for menor que 0, ou seja negativo, então esse inteiro será multiplicado pelo -1 para que torne-se positivo
	   I = I * -1;
	   printf("O valor positivo e: %i", I);
    }
    return 0;
}

