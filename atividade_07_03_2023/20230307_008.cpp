#include <stdio.h>

void troca(float *p, float *q)	{
    float aux = *q;
    *q = *p;
    *p = aux;
}

int main()	{
    float a, b;

    printf("Digite dois valores (A e B): ");
    scanf("%f %f", &a, &b);
    troca(&a, &b);
    printf("Valores trocados: A = %f|B = %f", a, b);

    return 0;
}
//
// Created by yago2 on 3/27/2023.
//
