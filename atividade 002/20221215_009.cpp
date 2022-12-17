#include <cstdio>
#include <math.h>

int main(){
    int a,b;
    float c;
    float aux1, aux2, aux3;
    printf("Digite um numero inteiro: ");
    scanf("%d",&a);
    printf("Digite outro numero inteiro: ");
    scanf("%d",&b);
    printf("Digite um numero real: ");
    scanf("%f",&c);

    aux1 = (a*2)*(b/2);
    aux2 = (a*3)+c;
    aux3 = pow(c,3);

    printf("\nO produto do dobro do primeiro com a metade do segundo: %.2f", aux1);
    printf("\nA soma do triplo do primeiro com o terceiro: %.2f",aux2);
    printf("\nO terceiro elevado ao cubo: %f",aux3);
    return 0;
}
//
// Created by yago2 on 12/16/2022.
//
