#include <stdio.h>
#include <stdlib.h>

int main()	{
    int i, j;
    int **m = (int **) malloc(2*sizeof(int *));

    for (i = 0; i < 3; i++)	{
        *(m+i) = (int *) malloc(3*sizeof(int));
    }

    for (i = 0; i < 2; i++)	{
        for (j = 0; j < 3; j++)	{
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 2; i++)	{
        for (j = 0; j < 3; j++)	{
            printf("%d ", *(*(m+i)+j));
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)	{
        free(m[i]);
    }

    free(m);
    return 0;

}
//
// Created by yago2 on 3/23/2023.
//
