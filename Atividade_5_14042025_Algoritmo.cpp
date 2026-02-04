#include <stdio.h>

int main (){
	
	int cont;
	
	for (cont = 1; cont <= 20; ++cont){
		
		if (cont %2 == 1)
		printf("%.2i\n", cont);
	}
	return 0;
}
