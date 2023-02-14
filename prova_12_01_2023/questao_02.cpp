#include <stdio.h>
#include <math.h>

float scan(void)  {
    float n;

    printf("Digite um numero real positivo entre 0 e 1: ");
    scanf("%f", &n);

    return n;
}

float arctan(float n)   {
    float soma = 0;
    float termo, den = 1;
    int cont = 1;

    termo = (pow(n, den))/den;

    while (fabs(termo) >= 0.0001) {
        termo = (pow(n, den))/den;
        if (cont % 2 == 1 && termo < 0) {
            termo *= -1;
        }
        else if (cont % 2 == 0 && termo > 0)    {
            termo *= -1;
        }
        cont++;
        soma += termo;
        den += 2;

    }

    return soma;
}

void print(float n, float arc)  {
    printf("O numero real eh %f e seu arco tangente eh %f", n, arc);
}

int main(void)  {
    float n, arc;

    n = scan();
    arc = arctan(n);
    print(n, arc);

    return 0;
}
//
// Created by yago2 on 2/14/2023.
//
