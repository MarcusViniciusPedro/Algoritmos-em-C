#include <stdio.h>

int main (){
	
	int curso;
	
	printf("Insira um numero inteiro entre 1 e 5: ");
	scanf("%i", &curso);
	switch (curso){
		
		case 1: printf("Engenharia\n"); break;
		case 2: printf("Edificações\n"); break;
		case 3: printf("Sistemas Eletricos\n"); break;
		case 4: printf("Turismo\n"); break;
		case 5: printf("Analise de Sistemas\n"); break;
		default: printf("curso invalido"); break;
	}
	return 0;
}
