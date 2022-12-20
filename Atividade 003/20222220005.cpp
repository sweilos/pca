#include <stdio.h>

int main(){
	int num,maior=0,menor=0,aux;
	
	printf("Digite o %d%c numero: ",1,167);
	scanf("%d", &num);
	maior=num;
	menor=num;
	for(int i=1 ; i<20; i++){
		printf("Digite o %d%c numero: ",i+1,167);
		scanf("%d", &num);
		if(num<0){
			printf("Numero invalido, insira um numero nao nulo\n");
			i--;
		}else	
			if(num<menor){
				menor=num;
			}
			if(num>maior){
			maior=num;
			}
	}
	
	
	printf("\nMaior: %d\nMenor: %d", maior,menor);
	
	return 0;
}
