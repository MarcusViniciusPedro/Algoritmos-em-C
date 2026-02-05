#include <stdio.h>

int main () {
	
	int A[5], B[5], C[5], i, x, j;	
	
		for(i = 0; i <= 4; ++i){
		
		printf("\nInforme o %i valor do vetor A:\n ", i + 1);
		scanf("%d", &A[i]);
	}
	/*Ordenação Bubble Sort para identificação de uma tabela do menor para o maior (Crescente)*/
	for(i = 0; i <= 3; ++i)
	for(j = i+1; j <= 4; ++j){
		if(A[i] > A[j]){
			x = A[i];
			A[i] = A[j];
			A[j] = x;
		}
	}
	printf("\n\nOrdem Crescente do Vetor A"); /*Perfumaria*/
	for(i = 0; i <= 4; ++i){
	printf("\nA ordem Crescente e %d: %d\n", i+1, A[i]); /*Resultado da ordem crescente*/
    }
		for(i = 0; i <= 4; ++i){
		
		printf("\nInforme o %i valor:\n ", i + 1);
		scanf("%d", &B[i]);
	}
	/*Ordenação Bubble Sort para identificação de uma tabela do menor para o maior (Crescente)*/
	for(i = 0; i <= 3; ++i)
	for(j = i+1; j <= 4; ++j){
		
		if(B[i] > B[j]){
			
			x = B[i];
			B[i] = B[j];
			B[j] = x;
		}
	}
	printf("\n\nOrdem Crescente do Vetor B"); /*Perfumaria*/
	for(i = 0; i <= 4; ++i){ /*Para toda ordenação de vetor é preciso utilizar a função for novamente*/
	printf("\n A ordem Crescente e %d: %d\n", i+1, B[i]); /*Resultado da ordem crescente*/
    }
    for(i = 0; i <= 4; ++i){
    	C[i] = A[i] + B[i]; /*Soma dos vetores A[i] e B[i] */
    	printf("\nA ordem da Somatória do Vetor C e %d: %d\n", i + 1, C[i]); 
	}
	return 0;
}
