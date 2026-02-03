#include<stdio.h>
// Coleta de dois valores float e, operações sobre esses valores (multiplicação e divisão), por fim, retorna todos os valores calculados
int main(){
	
	float V, T, D, LU; //valores de números variáveis
	
	printf("Entre com a velocidade");
	scanf("%f", &V); //Lerá o float V e armazena
	printf("Entre com o valor do tempo");
	scanf("%f", &T); //Lerá o float T e armazena
	
	D=V*T; //Calculo da distância (distância = Velocidade * Tempo)
	LU=D/12; //Calculo de litros (Litros = Distância / 12)
	
	printf("Os valores da velocidade, tempo, distancia e litros usados são:\n %.2f %.2f %.2f %.2f", V,T,D,LU);
	
	return 0; //Finalização da função
}
