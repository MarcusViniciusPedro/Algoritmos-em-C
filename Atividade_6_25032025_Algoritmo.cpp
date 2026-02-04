#include <stdio.h>

int main(){
	
	float V1, V2, Va, Vo;
	
	printf("Valor de V1: ");
	scanf("%f", &V1);
	printf("Valor de V2: ");
	scanf("%f", &V2);
	
	if(V1>V2){ 
		Va = V1 - V2;
		printf("Valor: %.2f", Va);
	}
	    if(V1<V2){
	        Vo = V2 - V1; 
	        printf("Valor: %.2f", Vo);
        }
	   
	return 0;
}
