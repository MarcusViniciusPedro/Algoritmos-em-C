#include <stdio.h>

main(){
	
	float A, B, C;
	
	printf("Insira numeros A: ");
	scanf("%f", &A);
	printf("Insira numeros B: ");
	scanf("%f", &B);
	printf("Insira numeros C: ");
	scanf("%f", &C);
	
	if (A > B && A > C && B > C){
	printf("A ordem e: %f %f %f", A, C, B);
    }
    else if (A > B && A > C && C > B){
    printf("A ordem e: %f %f %f", A, B, C);
    }
	else if (B > A && B > C && A > C){
	printf("A ordem e: %f %f %f", B, C, A);
    }
	else if (B > A && B > C && C > A){
	printf("A ordem e: %f %f %f", B, A, C);
    }
    else if (C > B && C > A && A > B){
	printf("A ordem e: %f %f %f", C, B, A);
    }
    else if (C  > B && C > A && B > A){
    printf("A ordem e: %f %f %f", C, A, B);
    }
    
	return 0;
}
