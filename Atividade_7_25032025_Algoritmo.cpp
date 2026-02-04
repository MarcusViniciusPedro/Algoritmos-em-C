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
	
	if(A < B + C && B < A + C && C < A + B){
		printf("Triangulo Verdadeiro\n");
		
	    if(A == B && B == C){
	    	printf("Triangulo Equilatero\n");
     	}
     	
     	if(A == B || A == C || B == C){
     		printf("Triangulo Isosceles\n");
	    }
	    
		else{
			printf("Triangulo Escaleno\n");
		}
	}
	else{
		printf("Triangulo Falso\n");
    }
	
	return 0;
}
