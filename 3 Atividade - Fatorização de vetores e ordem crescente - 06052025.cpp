#include <stdio.h>

int main (){
	
	int A[5], B[5], i, j, x; /*Para fazer um bubble sort simples deve-se conter 3 variáveis (Ex: i, j, x)
	eles realizarão o processo de troca de posição no intervalo desejado*/
    
	for(i = 0; i < 5; ++i){
		printf("Digite %d numero: ", i + 1); /*Requerimento de valores*/
		scanf("%d", &A[i]); /*Leitura de valores de A[i]*/
	}
	/*Fatorização dos valores em A[i]*/
	for(i = 0; i < 5; ++i){
		int fat = 1;
		for(j = 1; j <= A[i]; ++j){
			fat = fat * j; 
			}
			B[i] = fat; /*Salvamento em B[i]*/
		}
		/*Bubble Sort de B[i], B[j] e x*/
		for(i = 0; i < 4; ++i){
			for(j = 0; j < 4 - i; ++j){
				if(B[j] > B[j + 1]){
					x = B[j];
					B[j] = B[j + 1];
					B[j + 1] = x;
				}
			}
		}
		printf("O vetor B com fatoriais em ordem crescente:\n"); /*Perfumaria*/
		for(i = 0; i < 5; ++i){
			printf("%d\n", B[i]); /*Apresentação dos resultados*/
		}
		printf("\n");
		return 0;
}
