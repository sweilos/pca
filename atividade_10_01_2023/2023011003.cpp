#include <stdio.h>
#include <stdlib.h>


int corres(int a, int b){
    int cont = 0;

    while(a > 0){
        while(b > 0){
            if(a==b)
                cont++;
            printf("B = %d \n", b);
            b = b/10;
        }
        printf("A = %d \n", a);
        a=a/10;
    }
    if(cont >= 1){
        printf("Corresponde");
    }else{
        printf(" Não corresponde");
    }
}


int main(){
    int n, d;
    printf("X: ");
    scanf(" %d",&n);
    printf("Y: ");
    scanf(" %d",&d);
    corres(n,d);
    return 0;
}
//
// Created by yago2 on 2/14/2023.
//
