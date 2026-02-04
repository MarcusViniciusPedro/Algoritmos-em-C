#include <stdio.h>

int main(){
	
	float N1, N2, M1, M2, VE;
	
	printf("Valor da N1: ");
	scanf("%f", &N1);
	printf("Valor da N2: ");
	scanf("%f", &N2);
	
	M1 = (N1 + N2) / 2;
	
	if(M1 >= 6){
		printf("Aprovado: %.2f", M1);
	}
	else{
		printf("Valor de VE: ");
		scanf("%f", &VE);
		
		M2 = (VE + M1) / 2;
		
		if(M2 >= 5){
			printf("Aprovado: %.2f", M2);
		}
		else{
			printf("Reprovado: %.2f", M2);
		}
	}
	return 0;
	   
}
