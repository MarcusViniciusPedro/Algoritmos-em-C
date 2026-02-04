#include <stdio.h>
#include <math.h>

int main (){
	
	float A, B, C, x1, x2, delta;
	
	printf("\nInsira tres numeros (A, B, C):\n ");
	scanf("%f %f %f", &A, &B, &C);
	if (A == 0){
	printf("Nao e uma equacao do segundo grau.\n");
    }
	else{
		
	delta = pow(B, 2) - 4 * A * C;
	
	if (delta < 0){
		
	   printf("Nao existe raizes reais.\n");
    }
	else{
	
	   x1 = (- B + sqrt(delta)) / (2 * A);
	   x2 = (- B - sqrt(delta)) / (2 * A);
	   printf("Raizes: %.2f %.2f", x1, x2);
	   
    }
    }
    
	return 0;
}
