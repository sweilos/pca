#include <stdio.h>

int main(){
	int num,aux=0;
	
	for(int i=0; i<5; i++){
		printf("Digite o %d%c numero: ",i+1,167);
		scanf("%d", &num);
		aux+= num;
	}
	
	printf("\nSoma dos 5 numeros inseridos: %d",aux);
	
	return 0;
}
