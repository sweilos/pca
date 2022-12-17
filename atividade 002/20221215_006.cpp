#include <cstdio>

int main(){
    float salarioPorHora, horasTrabalhadas, salario;

    printf("Digite o quando voce ganha por hora: ");
    scanf("%f",&salarioPorHora);

    printf("Digite a quantidade de horas trabalhadas por mes: ");
    scanf("%f",&horasTrabalhadas);

    salario = salarioPorHora * horasTrabalhadas;

    printf("Salario do mes: %.2f",salario);
    return 0;
}
//
// Created by yago2 on 12/16/2022.
//
