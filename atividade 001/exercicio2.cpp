//programa que verifica se o gênero da pessoa é feminino

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char nome[100];
    char genero;
    int idade;

    printf("Digite o seu nome: ");
    scanf("%s",&nome);

    printf("Digite o seu genero: ");
    scanf(" %c",&genero);

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(toupper(genero) == 'F')
    {
        printf("\n%s\n%c\n%d\nFeminino",nome, genero, idade);
    }else
    {
        printf("\n%s\n%c\n%d\nOutro genero",nome, genero, idade);
    }

    return 0;
}

//
// Created by yago2 on 12/12/2022.
//
