#include <stdio.h>

void ordenar_tres_valores(int *a, int *b, int *c){
    int temp;

    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main(){
    int num1, num2, num3;

    printf("Digite numero: ");
    scanf("%d", &num1);
    printf("Digite numero: ");
    scanf("%d", &num2);
    printf("Digite numero: ");
    scanf("%d", &num3);

    ordenar_tres_valores(&num1, &num2, &num3);

    printf("Numeros ordenados em ordem crescente: %d %d %d", num1, num2, num3);

    return 0;
}
