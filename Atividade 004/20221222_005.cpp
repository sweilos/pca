#include <cstdio>

int main(){
    float sum = 0.0;
    float a,i;

    for (i = 1; i <= 50; i++){
        a=(2*i)-1;
        sum += a / i;
        printf("%.0f/%.0f \n", a,i);

    }
    printf("\nA soma da sequência acima é: %.f",sum);
    return 0;
}

//
// Created by yago2 on 1/3/2023.
//
