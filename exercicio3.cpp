//programa que calcula um ajuste de 10% no salário

#include <cstdio>

int main()
{
    float salario, ajuste;

    printf("Digite o seu salário: ");
    scanf("%f",&salario);
    ajuste = salario+(salario*0.10);
    printf("Salário com ajuste: %.2f",ajuste);

    return 0;

}

//
// Created by yago2 on 12/13/2022.
//


