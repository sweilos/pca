#include <cstdio>

int main(){
    float x[15], maior=0, menor=0;
    int i;

    for(i=0; i<15; i++){
        printf("Numero %dº: ",i+1);
        scanf(" %f",&x[i]);
    }
    menor=x[0];
    for(i=1;i<15;i++){
        if(x[i]>maior){
            maior=x[i];
        }
        if(x[i]<menor){
            menor=x[i];
        }
    }

    printf("Maior: %f\nMenor: %f",maior,menor);
    return 0;
}
//
// Created by yago2 on 1/2/2023.
//
