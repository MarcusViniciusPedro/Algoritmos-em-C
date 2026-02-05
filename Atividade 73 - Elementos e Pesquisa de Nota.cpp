#include <stdio.h>
#include <string.h>

int main (){
	
	int i, j, a;
	char nome[5][40], x[40], nome_pesq[40];
	
	printf("Listagem de nomes\n");
	
	/*Entrada de Dados*/
	for(i = 0; i <= 4; ++i){
		printf("Informe o %d nome: ", i + 1);
		fflush(stdin);
		fgets(nome[i], 40, stdin);
	}
	
	/*Ordenação de Strings*/
	for(i = 0; i <= 3; ++i)
	for(j = i; j <= 4; ++j){
		if(strcmp(nome[i], nome[j]) > 0){
			strcpy(x, nome[i]);
			strcpy(nome[i], nome[j]);
			strcpy(nome[j], x);
		}
	}
	
	/*Apresentação de Strings*/
	for(i = 0; i <= 4; ++i){
	printf("Nome %2d: %s", i + 1, nome[i]);
    }
    
	printf("\n\nEntre com um nome para ser pesquisado: ");
	fgets(nome_pesq, 40, stdin);
	j = 0;
	a = 0;
	while (j <= 4 && a == 0){
		if (strcmp(nome[j], nome_pesq) == 0){
			a = 1;
		}
		else{
			j = j + 1;
		}
	}
	printf ("\nFoi localizado em: %d", j + 1); /*Identificação espacial de onde o valor foi encontrado pela primeira vez*/
	
	return 0;
}
