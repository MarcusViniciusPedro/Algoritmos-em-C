#include <stdio.h>

main(){
	
	float SB, D, IR, NH, SH, HE, AHE, SLT;
	
	printf("Insira o Salario Bruto(SB): ");
	scanf("%f", &SB);
	printf("Insira o Numero de Horas(NH): ");
	scanf("%f", &NH);

	if (SB >= 800 && SB <= 1600){ //Se o salário for maior ou igual a 800 reais e igual ou menor que 1600 reais
        IR = SB * 0.08; //será descontado 8% de imposto de renda
        D = SB * 0.05; //mais 5% de outros descontos
    } 
	else if (SB > 1600){ //Se o salário for maior que 1600 reais
        IR = SB * 0.15; //desconto de 15% de imposto de renda
        D = SB * 0.07; //mais 7% de outros descontos
    }
    if (NH > 160) { //Se o número de horas ultrapassar 160 horas
        SH = SB / 160; //Será dividido o salário bruto por 160
        HE = NH - 160; //O número de horas subtraido por 160
        AHE = HE * SH * 0.50; //Por fim, multiplicado o valor da divisão do salário bruto com o valor da subtração do número de horas e 0,5
	}
    
    SLT = (AHE + SB) - (IR + D); //Por fim, para que seja encontrado o salário líquido será captado o valor de AHE mais o SB e subtraido por IR mais D
    
    printf("Salario Liquito total: R$ %.2f", SLT);
    
    return 0;
}

