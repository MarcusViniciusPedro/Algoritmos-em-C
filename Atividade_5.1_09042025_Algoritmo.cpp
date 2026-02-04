#include <stdio.h>

int main() {
    float salarioBruto, horasTrabalhadas, salarioLiquido, totalSalarioLiquido = 0.0;
    int numFuncionarios = 0;

    printf("Calculadora de Salário Líquido\n");
    printf("Digite 0 no salário bruto para finalizar.\n\n");

    do {
        printf("Digite o salário bruto do funcionário %d: R$ ", numFuncionarios + 1);
        scanf("%f", &salarioBruto);

        if (salarioBruto == 0) {
            break; // Sai do loop se o salário bruto for 0
        }

        printf("Digite o número de horas trabalhadas no mês: ");
        scanf("%f", &horasTrabalhadas);

        float descontoIR = 0.0;
        float descontoEncargos = 0.0;
        float adicionalHorasExtras = 0.0;

        // Cálculo dos descontos
        if (salarioBruto >= 800.00 && salarioBruto <= 1600.00) {
            descontoIR = salarioBruto * 0.08;
            descontoEncargos = salarioBruto * 0.05;
        } else if (salarioBruto > 1600.00) {
            descontoIR = salarioBruto * 0.15;
            descontoEncargos = salarioBruto * 0.07;
        }

        // Cálculo do adicional por horas extras
        if (horasTrabalhadas > 160) {
            float valorHora = salarioBruto / 160.0;
            float horasExtras = horasTrabalhadas - 160;
            adicionalHorasExtras = horasExtras * valorHora * 0.50;
        }

        // Cálculo do salário líquido
        salarioLiquido = salarioBruto - descontoIR - descontoEncargos + adicionalHorasExtras;

        printf("Salário Bruto: R$ %.2f\n", salarioBruto);
        printf("Desconto de Imposto de Renda: R$ %.2f\n", descontoIR);
        printf("Desconto de Encargos: R$ %.2f\n", descontoEncargos);
        printf("Adicional por Horas Extras: R$ %.2f\n", adicionalHorasExtras);
        printf("Salário Líquido do funcionário %d: R$ %.2f\n\n", numFuncionarios + 1, salarioLiquido);

        totalSalarioLiquido += salarioLiquido;
        numFuncionarios++;

    } while (1); // Loop infinito até que o usuário digite 0

    printf("\n----------------------------------------\n");
    printf("Total geral dos salários líquidos: R$ %.2f\n", totalSalarioLiquido);
    printf("Número de funcionários processados: %d\n", numFuncionarios);

    return 0;
}

