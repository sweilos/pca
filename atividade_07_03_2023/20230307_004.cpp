#include <stdio.h>

int main(){
    int array[8];
    int i;
    for(i=0;i<8;i++){
        scanf("%d",array+i);
    }
    for(i=0;i<8;i++){
        printf("%d\n",*(array+i));
    }
    return 0;
}
//
// Created by yago2 on 3/23/2023.
//
