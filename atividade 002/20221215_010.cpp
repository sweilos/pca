#include <cstdio>

int main(){
    float altura, peso;

    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    peso= (72.7 * altura) -58;

    printf("Este e o seu peso ideal: %.2f", peso);
    return 0;
}

//
// Created by yago2 on 12/16/2022.
//
