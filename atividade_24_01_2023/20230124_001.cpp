#include <stdio.h>
#define limite 100
int main(){
    int n,i, vetor[limite];
    do{
        printf("Valor de n (n < 100): ");
        scanf("%d",&n);
    }while(n >= 100);
    printf("Digite %d elementos:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    printf("Ordem inversa: ");
    for(i=n-1;i>=0;i--){
        printf("\n%d",vetor[i]);
    }
    return 0;
}


//
// Created by yago2 on 1/24/2023.
//
