#include <stdio.h>

int main() {
    int mat1[3][5] = {
            {7, 2, 6, 8, 10},
            {1, 3, 5, 4, 6},
            {9, 4, 4, 1, 8}
    };
    int mat2[3][5] = {
            {10, 8, 4, 4, 2},
            {8, 7, 5, 3, 1},
            {8, 6, 4, 4, 1}
    };

    int matSoma[3][5] = {0};
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            matSoma[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Matriz soma:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", matSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//
// Created by yago2 on 1/24/2023.
//
