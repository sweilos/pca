#include <cstdio>

int main(){
    float massaInicial;
    float seg=0,min,h;
    printf("Digite o valor da massa inicial do produto radioativo (em gramas): ");
    scanf("%f",&massaInicial);
    printf("\nMassa Inicial: %f",massaInicial);
    while(massaInicial>=0.5){
            massaInicial/=2;
            seg+=50;
        }
    min=seg/60;
    h=seg/3600;

    printf("\nMassa Final: %f",massaInicial);
    printf("\n\nTempo de decaimento:\n%.3f h\n%.3f min\n%.3f seg",h,min,seg);
    return 0;
}


//
// Created by yago2 on 1/3/2023.
//
