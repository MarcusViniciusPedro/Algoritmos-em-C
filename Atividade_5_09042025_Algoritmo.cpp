#include <stdio.h>

main(){
	
	float SB, D, IR, NH, SH, HE, AHE, SLT;
	
	printf("Insira o Salario Bruto(SB): ");
	scanf("%f", &SB);
	printf("Insira o Numero de Horas(NH): ");
	scanf("%f", &NH);
	
	if (SB >= 800 && SB <= 1600){
        IR = SB * 0.08;
        D = SB * 0.05;
    } 
	else if (SB > 1600){
        IR = SB * 0.15;
        D = SB * 0.07;
    }
    if (NH > 160) {
        SH = SB / 160;
        HE = NH - 160;
        AHE = HE * SH * 0.50;
    }
    
    SLT = (AHE + SB) - (IR + D);
    
    printf("Salario Liquito total: R$ %.2f", SLT);
    
    return 0;
}
