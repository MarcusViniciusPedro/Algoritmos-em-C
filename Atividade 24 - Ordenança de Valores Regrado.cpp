#include <stdio.h>

main(){ //A função tem como base conferir como resultado a exibição do maior valor em primeiro lugar, em seguida o menor valor, por fim o valor do meio respectivamente
	
	float A, B, C;
	
	printf("Insira numeros A: ");
	scanf("%f", &A);
	printf("Insira numeros B: ");
	scanf("%f", &B);
	printf("Insira numeros C: ");
	scanf("%f", &C);
	
	if (A > B && A > C && B > C){ //Se A for maior que B e A maior que C e B maior que C
	printf("A ordem e: %f %f %f", A, C, B); //A ordem será o valor contido em A, depois o C e, por fim o B
    }
    else if (A > B && A > C && C > B){ //Se A maior que B e A maior que C e C maior que B
    printf("A ordem e: %f %f %f", A, B, C); //Apresentará os valores na ordem A, B e C
    }
	else if (B > A && B > C && A > C){ //Se B maior que A e B maior que C e A maior que C
	printf("A ordem e: %f %f %f", B, C, A); //Sequencialmente será B, C e A
    }
	else if (B > A && B > C && C > A){ //Se B maior que A e B maior que C e C maior que A
	printf("A ordem e: %f %f %f", B, A, C); //Será B, A e C
    }
    else if (C > B && C > A && A > B){ //Se C maior que B e C maior que A e A maior que B
	printf("A ordem e: %f %f %f", C, B, A); //Ordenadamente ficará C, B e A
    }
    else if (C > B && C > A && B > A){ //Se C maior que B e C maior que A e B maior que A
    printf("A ordem e: %f %f %f", C, A, B); //Por fim, será C, A e B
    }
    
	return 0;
}
