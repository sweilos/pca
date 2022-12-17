#include <cstdio>

int main(){
    float tempF, tempC;

    printf("Digite a temperatura em Farenheit: ");
    scanf("%f",&tempF);

    tempC = (tempF - 32) * 5/9;

    printf("Temperatura em Celsius: %.1f",tempC);
    return 0;
}

//
// Created by yago2 on 12/16/2022.
//
