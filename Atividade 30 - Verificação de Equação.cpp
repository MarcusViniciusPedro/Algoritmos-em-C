#include <stdio.h>
#include <math.h>

int main (){
	
	float A, B, C, x1, x2, delta;
	
	printf("\nInsira tres numeros (A, B, C):\n ");
	scanf("%f %f %f", &A, &B, &C);
	
	if (A == 0){ //Caso o valor de A sejá exatamente 0 será indicado que não é uma equação do segundo grau
	printf("Nao e uma equacao do segundo grau.\n");
    }
	else{ //Para qualquer outro valor de A será feito o cálculo da equação do segundo grau normalmente
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

