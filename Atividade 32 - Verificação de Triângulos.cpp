#include <stdio.h>
#include <math.h>

int main(){
	
	float A, B, C;
	
	printf("Valor de A: ");
	scanf("%f", &A);
	printf("Valor de B: ");
	scanf("%f", &B);
	printf("Valor de C: ");
	scanf("%f", &C);
	
	if(A < B + C && B < A + C && C < A + B){ //Caso A for menor que B mais C e B menor que A mais C e C menor que A mais B 
		printf("Triangulo Verdadeiro\n"); //Então i triângulo existe
		
	    if(A == B && B == C){ // Se A for igual a B e B igual a C
	    	printf("Triangulo Equilatero\n"); //Será um triângulo equilátero
     	}
     	
     	if(A == B || A == C || B == C){ //Se A igual a B ou A igual a C ou B igual C
     		printf("Triangulo Isosceles\n"); //Será um triângulo Isósceles
	    }
	    
		else{ //Qualquer outra configuração de triângulo 
			printf("Triangulo Escaleno\n"); //Será considerado um Escaleno
		}
	}
	else{ //Se a condição de triângulo verdadeiro não for cumprida, então o programa vai definir o triângulo como falso/inexistente
		printf("Triangulo Falso\n");
    }
	
	return 0;
}

