#include <stdio.h>

int main (){
	
	int cont = 1;
	
	while (cont <= 20){
		
		if (cont %2 == 0)
		printf("%.2i\n", cont);
		cont = cont + 1;
	}
	return 0;
}
