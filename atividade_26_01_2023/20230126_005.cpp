#include <stdio.h>
#define lin 5
#define col 5

int main() {
    int mat1[lin][col];
    int i, j, somalinqua= 0, somacol2 = 0;


    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("linha %d coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);

        }
    }

    printf("\nDiagonal principal:\n");

    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i == j) {
                printf("\t%d\t", mat1[i][j]);

            }
            printf("\t");
        }
        printf("\n");

    }
    printf("\nDiagonal secundaria:\n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i + 1 + j + 1 == lin + 1) {
                printf("\t%d\t", mat1[i][j]);

            }
            printf("\t");
        }
        printf("\n");

    }
    somalinqua = mat1[3][0] + mat1[3][1] + mat1[3][2] + mat1[3][3] + mat1[3][4];
    printf("\nResultado da soma da quarta linha: %d\n", somalinqua);
    somacol2 = mat1[0][1] + mat1[1][1] + mat1[2][1] + mat1[3][1] + mat1[4][1];
    printf("\nResultado da soma da segunda coluna: %d\n", somacol2);

    printf("Imprimir toda matriz menos a coluna principal: \n");
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (i != j) {
                printf("\t%d\t", mat1[i][j]);
            } else {
                printf("\t\t");
            }
        }
        printf("\n");
    }
}
//
// Created by yago2 on 2/14/2023.
//