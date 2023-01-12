//
// Created by yago2 on 1/12/2023.
//
#include <stdio.h>
int fat(int n){
    int i;
    int f=1;
    for(i=n; i>=1; i--){
        f*=i;
    }
    return f;
}

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d",&n);
    printf("\nO fatorial de %d é: %d",n,fat(n));
    return 0;
}