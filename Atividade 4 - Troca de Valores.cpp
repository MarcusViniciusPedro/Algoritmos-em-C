#include<stdio.h>
//Exemplo de troca de valores (swap) básico
int main(){
	
	int A, B, C;
	
	printf("Entre com o valor de A: ");
	scanf("%i", &A);
	printf("Entre com o valor de B: ");
	scanf("%i", &B);
	
	C = A; //O valor conferido em A é alocado na constante C
	A = B; //O valor conferido em B é alocado na constante A que encontra-se sem valor nesse instante
	B = C; //O valor conferido em C é alocado naa constante B que também está "vazia"
	
	printf("Os valores trocados sao:\n %i %i", A, B); //No final será apresentado os números trocados, o número que inicialmente estava em A foi para o B e vice-versa
	
	return 0;
}

