#include <stdio.h>
int main () {

    int matriz[3][3];

    int i, j, elemento;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("[%d] [%d]: ",i+1,j+1);
            scanf("%d", &elemento);
            matriz[i][j] = elemento;
        }
    }

    int escalar = 0;
    printf("digite o escalar: ");
    scanf("%d", &escalar);

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz[i][j] = (matriz[i][j] * escalar);
            printf(" %d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//
// Created by yago2 on 2/14/2023.
//
