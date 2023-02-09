//
// Created by yago2 on 1/12/2023.
//
#include <stdio.h>

int cont(int n, int d){
    int c;
    while(n>0){
        if((n%10)==d){
            c++;
            n=n/10;
        }
        return c;
    }
    return c;
}
int main(){
    int n, d;

    scanf("%d",&n);
    scanf("%d",&d);
    printf("\n%d",cont(n,d));
    return 0;
}
