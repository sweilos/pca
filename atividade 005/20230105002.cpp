//
// Created by yago2 on 1/8/2023.
//

#include <cstdio>

void scan(float *weight, float *weeks){
    float w1,w2;
    printf("Insira o peso do feto em gramas: ");
    scanf("%f",&w1);
    *weight=w1;
    printf("Insira as semanas de gravidez: ");
    scanf("%f",&w2);
    *weeks=w2;
}

void verifyLaborCondition(float weight, float weeks){
    float months;

    if(weight<100 || weeks<28){
        printf("\nParto não deverá ser realizado, reavaliar clinicamente");
    }else{
        months = weeks/4;
        if(weight>2500 && months>7) {
            printf("\nParto normal");
        }
        if(weight>2500 && months<=7) {
            printf("\nParto cesariana");
        }
        if((weight<2000 && weight>1500) && months>9){
            printf("\nParto normal");
        }
    }

}


int main(void){
    float weight, weeks;
    scan(&weight,&weeks);
    printf("\n%.2f,%.2f",weight, weeks);
    verifyLaborCondition(weight, weeks);
    return 0;
}