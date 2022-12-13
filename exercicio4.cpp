//programa que calcula a porcentagem do garçom

#include <stdio.h>

int main(void)
{
    float conta, gorjeta;

    printf("Digite o valor da conta: ");
    scanf("%f",&conta);

    gorjeta = conta*0.10;

    printf("Valor da gorjeta: %.2f", gorjeta);

    return 0;
}

//
// Created by yago2 on 12/13/2022.
//
