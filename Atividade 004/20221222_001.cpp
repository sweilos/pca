#include <cstdio>
#include <cmath>

#define e 0.1


int main(){
    float y,x[50],n=1;
    int i = 1;

    printf("Insira um numero: ");
    scanf ("%f",&y);

    printf("\nNewton-Raphson: \n");
    while (n > e){
        if (i == 1){
            x[i]= y/2;
            printf("%.2f \n", x[i]);
        }
        if(i > 1){
            x[i] = (x[i-1]) - (((x[i-1]*x[i-1])-y)/(2*x[i-1]));
            printf("%.2f \n", x[i]);
        }
        n = fabs(x[i-1]-x[i]);
        i++;
    }
    printf("\nResultado obtido pela biblioteca math(): \n%.2f", sqrt(y));

    return 0;
}
//
// Created by yago2 on 1/2/2023.
//
