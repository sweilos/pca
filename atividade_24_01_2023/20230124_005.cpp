#include <stdio.h>
#include <stdlib.h>

void fatorial(int n[], int tam){
    int i, j, count = 1, m[tam];
    for (i = 0; i < tam; i++){
        for (j = n[i]; j > 0; --j){
            count *= j;
            m[i] = count;
        }
        count = 1;
        printf("%d \n", m[i]);
    }
}

int main(){
    int n[100], i, tam;

    printf("Digite a quantidade de números: ");
    scanf("%d", &tam);

    for (i = 0; i < tam; i++){
        printf("Digite um número: ");
        scanf("%d", &n[i]);

        while (n[i] > 100){
            printf("Número inválido \nDigite um número: ");
            scanf("%d", &n[i]);
        }
    }

    fatorial(n, tam);

    return 0;
}

//
// Created by yago2 on 1/24/2023.
//
