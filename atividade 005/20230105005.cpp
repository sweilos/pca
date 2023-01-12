//
// Created by yago2 on 1/12/2023.
//
#include <stdio.h>
int fib(int n){
    int aux1=1, aux2=1, fn, pos=4;
    fn=aux1+aux2;
    if(n==1||n==2){
        printf("\n1");
    }else
        if(n==3){
            printf("\n2");
        }else{
            do{
                aux1=aux2;
                aux2=fn;
                fn=aux1+aux2;
                pos++;
            }while(pos<=n);
        }
    return fn;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}
