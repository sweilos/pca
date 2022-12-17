#include <cstdio>

int main(){
    float salarioPorHora, horasTrabalhadas, sal_bruto, inss, sal_liquido, sind, imp, descontos;

    printf("Digite o quando voce ganha por hora: ");
    scanf("%f",&salarioPorHora);

    printf("Digite a quantidade de horas trabalhadas por mes: ");
    scanf("%f",&horasTrabalhadas);

    sal_bruto = salarioPorHora * horasTrabalhadas;

    imp = sal_bruto * 0.11;
    inss = sal_bruto * 0.08;
    sind = sal_bruto * 0.05;
    descontos = imp + inss + sind;
    sal_liquido = sal_bruto - descontos;

    printf("\nSalario Bruto: R$%.2f",sal_bruto);
    printf("\nQuanto foi pago ao INSS: R$%.2f", inss);
    printf("\nQuanfo foi pago a o Sindicato: R$%.2f",sind);
    printf("\nSalario liquido: R$%.2f", sal_liquido);
    return 0;
}
//
// Created by yago2 on 12/16/2022.
//
