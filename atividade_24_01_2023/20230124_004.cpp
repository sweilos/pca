#include <stdio.h>
#define limite 100

void pares(int n, int vet[]){
    int i;
    for(i=0;i<n;i++){
        if(vet[i]%2==0){
            printf("\n%d",vet[i]);
        }
    }
}
int main(){
    int n, vet[limite], i;
    do{
        printf("Valor de n (n < 100): ");
        scanf("%d",&n);
    }while(n >= 100);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    pares(n, vet);
    return 0;
}

//
// Created by yago2 on 1/24/2023.
//
