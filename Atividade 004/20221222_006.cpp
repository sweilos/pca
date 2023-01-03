#include <cstdio>

int main(){
    int n,i,aux=0;

    printf("Digite um número para verificar se ele é perfeito: ");
    scanf("%d",&n);

    if(n<=1){
        if(n<=0){

            printf("\nDigite um número maior que 0");
        }
        else {
            printf("\n%d É um número perfeito", n);
        }
    }
    else{
        for (i = 1; i!=(n - 1); i++){

            if ((n%i)==0) {
                aux += i;
            }
        }
        if(aux != n){
            printf("\n%d não é um número perfeito", n);
        }
        else{
            printf("\n%d é um número perfeito", n);
        }
    }

    return 0;
}

//
// Created by yago2 on 1/3/2023.
//
