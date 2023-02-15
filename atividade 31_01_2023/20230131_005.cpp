#include <stdio.h>
#include <string.h>

int cifrado(char letra, int cifra){
    letra = letra - ('a' - 'A');
    if (letra+cifra > 90){return 64+letra+cifra-90;}
    else{return letra+cifra;}
}

int main(){
    printf("Digite uma frase de até 400 caracteres:\n");
    char frase[401];
    scanf("%400[^\n]", frase);

    int tam = strlen(frase);

    for (int i=0; i<tam; i++){
        if(frase[i] == ' '){printf(" ");}
        else{printf("%c", cifrado(frase[i], 3));}
    }
    return 0;
}
//
// Created by yago2 on 2/14/2023.
//
