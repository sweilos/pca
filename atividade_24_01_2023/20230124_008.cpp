#include <stdio.h>
#include <stdlib.h>


void produtoVet(int x[], int y[], int n){
    int i, aux[n], count;
    for (i = 1; i <= n; i++){
        printf("x[%d]: %d\n", i, x[i]);
        printf("y[%d]: %d\n", i, y[i]);
        count += x[i]*y[i];
    }
    printf("somatório de X[i] * Y[i]: %d \n", count);
}


int main(){
    int n, x[n], y[n];
    int i;

    printf("Digite o tamanho de ambos vetores: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("Digite o %d° elemento do vetor x: ", i);
        scanf("%d", &x[i]);
    }

    for (i = 1; i <= n; i++){
        printf("Digite o %d° elemento do vetor y: ", i);
        scanf("%d", &y[i]);
    }

    produtoVet(x, y, n);
    return 0;


}

//
// Created by yago2 on 2/14/2023.
//
