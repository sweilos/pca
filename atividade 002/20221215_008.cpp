#include <cstdio>

int main(){
    float tempC, tempF;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&tempC);

    tempF = (tempC * 9/5) + 32;

    printf("Temperatura em Farenheit: %.1f",tempF);
    return 0;
}

//
// Created by yago2 on 12/16/2022.
//
