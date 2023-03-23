#include <stdio.h>
#include <stdlib.h>

int* valloc(int qtd){
    int i;
    int *out = (int*) malloc(qtd*sizeof(int));
    for(i=0; i<qtd; i++){
        printf("Valor %d: ",i+1);
        scanf("%d",(out+i));
    }
    return out;
}

void maxmin(int *vet, int *menor, int *maior, int n){
    int min=*(vet+0);
    int max=0;
    int i;
    for (i=0; i< n; i++){
        if (min > *(vet+i))
            min = *(vet+i);
        if (max < *(vet+i))
            max = *(vet+i);
    }
    *maior = max;
    *menor= min;
}
int main(){
    int n, min, max;
    int *vet;
    printf("numero de elementos: ");
    scanf("%d",&n);
    vet=valloc(n);
    maxmin(vet, &min, &max, n);
    printf ("\nMaior= %d ", max);
    printf ("\nMenor= %d ", min);
    free(vet);
    return 0;
}

//
// Created by yago2 on 3/23/2023.
//
