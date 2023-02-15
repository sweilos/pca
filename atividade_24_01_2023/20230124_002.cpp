#include <stdio.h>
#define limite 100
void inverter(int n, int vet[]){
    int i;
    printf("Ordem Inversa: ");
    for(i=n-1; i>=0; i--){
        printf("\n%d",vet[i]);
    }

}

int main(){
    int vet[limite], i, n;
    do{
        printf("Valor de n (n < 100): ");
        scanf("%d",&n);
    }while(n >= 100);
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    inverter(n,vet);
    return 0;
}

//
// Created by yago2 on 1/24/2023.
//
