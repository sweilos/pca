//
// Created by yago2 on 1/12/2023.
//
#include <stdio.h>
void scan(int *n){
    int n1;
    do{
        printf("\ndigite um número par: ");
        scanf("%d",&n1);
    }while(n1%2!=0);
    *n=n1;
}

void verifyPerfectNumber(int n){
    int i;
    int soma=0;
    for(i=1; i<n; i++){
       if(n%i==0){
           printf("%d ",i);
           soma+=i;
       }
    }
    if(soma==n){
        printf("\nÉ um número perfeito");
    }else{
        printf("\nNão é um número perfeito");
    }

}

int main(){
    int n;
    scan(&n);
    verifyPerfectNumber(n);
    return 0;
}

