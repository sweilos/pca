#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("ordem da matriz:\n");
    int n;
    scanf("%d", &n);

    printf("Agora digite a matriz:\n");
    int matriz[300][300];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    int magico1 = 0;
    int magico2 = 0;
    int is_magic = 1;

    // Verificando a soma das linhas:
    for(int i = 0; i < n; i++){magico1 = magico1 + matriz[0][i];}
    printf("linha: magico1 %d\n", magico1);

    for(int i = 1; i < n; i++){
        for(int j = 0; j < n; j++){magico2 = magico2 + matriz[i][j];}
        printf("linha: magico2 %d\n", magico2);
        if(magico1 != magico2){is_magic = 0;}
        magico2 = 0;
    }
    magico1 = 0;

    // Verificando a soma das colunas:
    if(is_magic == 1){
        for(int i = 0; i < n; i++){magico1 = magico1 + matriz[i][0];}
        printf("coluna: magico1 %d\n", magico1);

        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){magico2 = magico2 + matriz[j][i];}
            printf("coluna: magico2 %d\n", magico2);
            if(magico1 != magico2){is_magic = 0;}
            magico2 = 0;
        }
        magico1 = 0;

        // Verificando a soma da diagonal principal e secundária:
        if(is_magic == 1){
            for(int i = 0; i < n; i++){magico1 = magico1 + matriz[i][i];}
            for(int i = n - 1; i >= 0; i--){magico2 = magico2 + matriz[i][n - i - 1];}

            if(magico1 != magico2){is_magic = 0;}

            if(is_magic){printf("A matriz dada é um quadrado mágico");}
            else{printf("A matriz dada não é um quadrado mágico.\n");}
        }
        else{printf("A matriz dada não é um quadrado mágico.\n");}
    }
    else{printf("A matriz dada não é um quadrado mágico.\n");}

    return 0;
}



//
// Created by yago2 on 2/14/2023.
//
