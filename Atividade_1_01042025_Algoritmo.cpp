#include <stdio.h>
#include <conio.h>

int main (){
	
	int cont = 0;
	
	while (cont <= 20){
		
		if (cont %2 == 1)
		printf("%.2i\n", cont);
		cont = cont + 1;
	}
	return 0;
}
