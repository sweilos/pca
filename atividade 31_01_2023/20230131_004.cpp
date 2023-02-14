#include <cstdio>
#include <cstring>
#define lim 20

int main(){
    char s1[lim], s2[lim],con[lim],c;
    int i;
    scanf(" %s",&s1);
    printf("String length: %d\n",strlen(s1));
    scanf(" %s",&s2);
    if(strcmp(s1,s2)!=0){
        printf("The strings are different\n");
    }else
        printf("\nThe strings are the same\n");
    strcpy(con,s1);
    strcat(con,s2);
    printf("\nConcatenation of the strings: %s",con);
    printf("\n");

    for(i=strlen(s1)-1;i>=0; i--){
        printf("%c",s1[i]);
    }

    printf("Insert a character to be found in the string: ");
    scanf(" %c",&c);

    for(i=0; i<strlen(s1); i++){

    }

    return 0;

}

//
// Created by yago2 on 2/9/2023.
//
