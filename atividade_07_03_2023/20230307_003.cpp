#include <stdio.h>

int main(){
    int a=1;
    float b=5.7;
    char c='c';

    int *ap=&a;
    float *bp=&b;
    char *cp=&c;
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n\n",c);

    *ap = 2;
    *bp = 9.9;
    *cp = 'b';

    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);
    return 0;
}

//
// Created by yago2 on 3/23/2023.
//
