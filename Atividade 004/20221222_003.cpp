#include <cstdio>

int main(){
    int num=0,SomaPar,SomaImpar;


    while(num<1000) {
        printf("Insira um numero: ");
        scanf("%d", &num);

        if(num<1000){
            if (num % 2 == 0) {
                SomaPar += num;
            }
            if (num % 2 != 0) {
                SomaImpar += num;
            }
        }else{
            break;
        }
    }

    printf("\nSoma dos pares: %d", SomaPar);
    printf("\nSoma dos impares: %d", SomaImpar);
    return 0;
}
//
// Created by yago2 on 1/2/2023.
//
