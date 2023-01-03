#include <cstdio>

int main(){
    int n, aux=0;
    int i;

    printf("Insira o número: ");
    scanf("%d",&n);

    for (i=2;i<=n/2;i++){
        if(n%i==0){
            aux++;
            printf("Não é primo.");
            break;
        }
    }
    if(aux==0){
        printf("É primo");
    }
    return 0;
}


//
// Created by yago2 on 1/3/2023.
//
