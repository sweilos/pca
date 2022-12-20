#include <stdio.h>

int main(){
	int num,aux=0;
	
	for(int i=0; i<50; i++){
		printf("Digite o %d%c numero: ",i+1,167);
		scanf("%d", &num);
		if(num%2!=0 && (num<=200 && num>=100)){
			aux+= num;
		}
		
	}
	
	printf("\nSoma de todos o numeros impares entre 100 e 200 inseridos: %d",aux);
	
	return 0;
}
