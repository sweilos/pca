#include <stdio.h>
#include <stdlib.h>

int i;

int* funcao(int *inicio, int *fim){
    int n = 2;
    /*printf("qual valor quer encontrar no vetor?\n");
    scanf("%d", &n);*/

    for (i = *inicio; i < *fim ; i+=1 ){
        if(*(inicio+i) == n){
            return inicio+i;
        }
    }
    return NULL;
}

int main(){
    int vetor[10]={1, 2, 3, 2, 4, 2, 5, 6, 7, 8};
    int *inicio = &vetor[0], *fim = &vetor[9], *prim;
    prim = funcao(inicio, fim);
    if(prim == NULL){
        printf("Valor nao encontrado no vetor");
        return 0;
    }else{

        printf("o primeiro valor de 2 esta na %d posicao do vetor\n", *prim);
        printf("E todas as suas ocorrencias estao nos seguintes endereços de memoria:\n");
        for(i = *inicio; i < *fim; i += 1){
            if(*(inicio+i) == *prim){
                printf("%d\n", (inicio+i));
            }
        }
    }
    return 0;
}

//
// Created by yago2 on 3/23/2023.
//
