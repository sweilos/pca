#include <cstdio>
#include <cstring>

void invert(char string[]){
    int i;
    for(i=strlen(string)-1;i>=0;i--){
        printf("%c",string[i]);
    }
}

void noVowels(char string[]){
    int i,len;
    len = strlen(string);
    printf("\n");
    for(i=0; i<len; i++) {
        if (string[i]) {
            if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' &&
                string[i] != 'A' && string[i] != 'E' && string[i] != 'I' && string[i] != 'O' && string[i]) {
                printf("%c", string[i]);
            }
        }
    }
}

void capitalize(char string[]){
    int i;
    printf("\n");
    for (i = 0; string[i]!='\0'; i++) {
        if(string[i] >= 'a' && string[i] <= 'z') {
           printf("%c",string[i] -32);
        }
    }

}

void characterCount(char string[]) {
    int i, cont=0;
    char c;
    printf("\n");
    printf("Insert a character to be found in the string:");
    scanf(" %c",&c);
    for(i=0;i< strlen(string);i++){
        if(string[i]==c){
            cont++;
        }
    }
    if(cont==0){
        printf("%c does not appear in the string",c);
    }else
        if(cont==1){
            printf("%c appears %d time in the string %s",c,cont,string);
        }else
            printf("%c appears %d times in the string %s",c,cont,string);
}


void eraseCharacter(char string[]){
    int i;
    char c;
    printf("\n");
    printf("Insert a character to be removed from the string:");
    scanf(" %c",&c);
    for(i=0;i< strlen(string);i++){
        if(string[i]!=c){
            printf("%c",string[i]);
        }
    }
}

int main(){
    char string[100];
    printf("Insert a string (100 characters limit): ");
	gets(string);
    invert(string);
    noVowels(string);
    capitalize(string);
    characterCount(string);
    eraseCharacter(string);
    return 0;

}



