#include <stdio.h>
#include <math.h>

float arredondarNota(float nota) {
    int parteInteira = (int)nota;
    float parteDecimal = nota - parteInteira;

    if (parteDecimal > 0.5) {
        return parteInteira + 1;
    } else {
        return parteInteira;
    }
}

int main() {
    float nota, notaArredondada;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    notaArredondada = arredondarNota(nota);

    printf("A nota arredondada é: %.1f\n", notaArredondada);

    return 0;
}
