//programa que calcula a área de um triângulo

#include <stdio.h>

int main(void)
{
    float base, height, area = 0.0;

    printf("Digite o valor da base do triangulo: ");
    scanf("%f",&base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f",&height);

    area = (base * height) / 2;

    printf("O valor da area do triangulo e: %.2f",area);
    return 0;
}

//
// Created by yago2 on 12/12/2022.
//
