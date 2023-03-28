#include <stdio.h>
#include <string.h>
#define max 100

void vet(char string[], char l, int *len)  {
    int i;
    *len = 0;

    for (i = 0; string[i] != '\0'; i++) {
        if (string[i] == l) {
            printf("%d ", i);
            *len += 1;
        }
    }

}

int main()  {
    char string[max], letter;
    int len;

    printf("Digite uma string: ");
    gets(string);
    printf("Digite uma letra: ");
    scanf("%c", &letter);

    vet(string, letter, &len);
    printf("\n");
    printf("Tamanho do vetor: %d", len);

    return 0;
}
//
// Created by yago2 on 3/27/2023.
//
