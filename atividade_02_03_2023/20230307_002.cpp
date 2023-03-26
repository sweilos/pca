#include <stdio.h>
#include <stdlib.h>

void find_number(int *a, int *b)	{
    int *p;
    int cont = 0;

    for (;a <= b; a++)	{
        if (*a == 2)	{
            if (cont == 0)	{
                p = a;
            }
            cont++;
            printf("%p ", a);
        }
    }
    printf("primeira ocorrencia: %p", p);
}

int main()	{
    int vet[10] = {2, 2, 2, 2, 4, 5, 6, 2, 7, 8};
    find_number(&vet[0], &vet[9]);

    return 0;
}

//
// Created by yago2 on 3/23/2023.
//
