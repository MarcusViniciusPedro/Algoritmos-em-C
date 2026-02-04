#include <stdio.h>

int main (){
	
	int cont = 1;
	
	while (cont <= 20){ //Apresenta os valores até 20 
		
		if (cont %2 == 0) //Condiciona a aparecer apenas os números divisíveis por 2
		printf("%.2i\n", cont);
		cont = cont + 1;
	}
	return 0;
}

