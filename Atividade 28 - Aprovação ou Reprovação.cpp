#include <stdio.h>

int main(){
	
	float N1, N2, M1, M2, VE;
	
	printf("Valor da N1: ");
	scanf("%f", &N1);
	printf("Valor da N2: ");
	scanf("%f", &N2);
	
	M1 = (N1 + N2) / 2; //A formula dará a média básica de duas notas
	
	if(M1 >= 6){ //Caso essa "nota" seja maior ou igual a 6 o aluno é aprovado
		printf("Aprovado: %.2f", M1);
	}
	else{ //Caso o valor for menor que 6 ele deverá fazer a prova de recuperação e adicionar no código como valor de VE
		printf("Valor de VE: ");
		scanf("%f", &VE);
		
		M2 = (VE + M1) / 2; //Então será somado o valor da recuperação com a Média das provas N1 e N2 e divido por 2 para encontrar a nova média
		
		if(M2 >= 5){ //Se essa nova média for igual ou maior que 5, o aluno foi aprovado
			printf("Aprovado: %.2f", M2);
		}
		else{ //Se menor que 5 reprovado
			printf("Reprovado: %.2f", M2);
		}
	}
	return 0;
	   
}

