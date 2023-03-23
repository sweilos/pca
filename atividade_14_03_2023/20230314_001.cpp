#include <cstdio>
#include <cstdlib>
#include <math.h>
#define NULL 0

void mediaDesvio(float *p, int n, float *media, float *desvio){
    int i;
    float soma=0;
    float s=0;

    for(i=0; i<n; i++){
        soma += *(p+i);
    }
    *media = soma/n;

    for(i=0; i<n; i++){
        s+= pow(*(p+i)-(*media),2);
    }
    *desvio=sqrt(s/n);
}
int main(){
    int n, i;
    float *p;
    float media, desvio;
    printf("Quantidade de alunos: ");
    scanf("%d",&n);
    p = (float*) (malloc(n*sizeof(float)));

    if(n!=NULL){
        for(i=0; i<n; i++){
            printf("Nota %d: ",i+1);
            scanf("%f", (p+i));
        }
    }

    mediaDesvio(p, n, &media, &desvio);
    printf("Media: %.2f", media);
    printf("\nDesvio: %.2f", desvio);
    free(p);
    return 0;
}
//
// Created by yago2 on 3/23/2023.
//
