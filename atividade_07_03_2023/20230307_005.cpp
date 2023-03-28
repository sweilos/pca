#include <stdio.h>

int ordenar(int *num1, int *num2, int *num3){
    int V[3] = {*num1, *num2, *num3};
    int i;
    int maior;
    int menor;
    int meio;

    if(*num1 == *num2 && *num1 == *num3){
        return 1;
    }

    for(i=0;i<3;i+=1){
        if (i == 0){
            maior = V[i];
            menor = V[i];
        }
        if (V[i] > maior){
            maior = V[i];
        }
        if (V[i] < menor){
            menor = V[i];
        }
    }
    for(i=0;i<3;i+=1){
        if(V[i] > menor && V[i] < maior){
            meio = V[i];
        }
    }
    *num1 = menor;
    *num2 = meio;
    *num3 = maior;
    return 0;
}
int main(){
    int a, b, c;
    printf("primeiro valor: \n");
    scanf("%d", &a);
    printf("segundo valor: \n");
    scanf("%d", &b);
    printf("terceiro valor: \n");
    scanf("%d", &c);

    int resp = ordenar(&a, &b, &c);

    printf("Os valores ordenados:\n%d \n%d \n%d\n", a, b, c);

    if (resp == 1) {
        printf("Os valores sao iguais\n");
    } else {
        printf("Os valores sao diferentes\n");
    }

    return 0;
}

//
// Created by yago2 on 3/27/2023.
//
