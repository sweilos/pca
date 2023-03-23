#include <stdio.h>
#include <stdlib.h>

double **aloca2(int lin, int col){
    double **m;
    int i, j;

    m = (double **) malloc(lin * sizeof (double *));

    for (i=0; i < lin; i++)
        *(m+i)= (double *) malloc (col * sizeof (double));

    for (i=0; i < lin; i++){
        for (j=0; j < col; j++){
            printf ("Valor em %d,%d = ", i, j);
            scanf ("%lf", (*(m+i)+j));
        }
    }
    return m;
}

int main(){
    int m, n, i, j;
    double **m1;
    double **m2;
    double **soma;

    printf ("\nlinhas: ");
    scanf ("%d", &m);
    printf ("\ncolunas: ");
    scanf ("%d", &n);


    printf ("Matriz 1\n");
    m1 = aloca2(m,n);
    printf ("Matriz 2\n");
    m2 = aloca2(m,n);


    printf ("Soma\n");
    soma = (double **) malloc(m * sizeof (double *));

    for (i=0; i<m; i++)
        *(soma+i)= (double *) malloc (n * sizeof (double));


    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            (*(*(soma+i)+j)) = (*(*(m1+i)+j))+(*(*(m2+i)+j));
        }
    }

    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            printf ("\n Valor em %d,%d= %lf ", i, j, *(*(soma+i)+j));
        }
    }

    free(m1);
    free(m2);
    free(soma);
}
//
// Created by yago2 on 3/23/2023.
//
