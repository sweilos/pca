#include <cstdio>
#include <cstring>

int main(){
    // char var_name [num_of_strings][length_of_strings];
    char cars[5][100];
    float gas[5], aux=1000;
    int i,eco;

    for(i=0;i<2;i++){
        printf("Insert the car model: ");
        scanf(" %s",&cars[i]);
        printf("Insert the car's fuel consumption: ");
        scanf(" %f",&gas[i]);

        if(gas[i]<aux){
            aux=gas[i];
            eco=i;
        }
    }
printf("\n The most economic car is %s:", cars[eco]);

    for(i=0;i<2;i++){
        printf("\nthe car: %s \t",cars[i]);
        printf("Consumes %.2f to drive for 1000km",1000/gas[i]);
    }
    return 0;
}

//
// Created by yago2 on 2/9/2023.
//
