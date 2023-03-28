#include <stdio.h>

void troca(int v[], int *mn, int *mx, int len)	{
    int min, max, i;
    max = v[0];
    min = v[0];

    for (i = 0; i < len; i++)	{
        if (v[i] > max)	{
            max = v[i];
        }
        else if (v[i] < min)	{
            min = v[i];
        }
    }
    *mx = max;
    *mn = min;
}

int main()	{
    int len, i;
    int min, max;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &len);

    int v[len];
    for (i = 0; i < len; i++)	{
        printf("Digite o elemento v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    troca(v, &min, &max, len);
    printf("Minimo: %d|Maximo: %d\n", min, max);

    return 0;
}
//
// Created by yago2 on 3/27/2023.
//
