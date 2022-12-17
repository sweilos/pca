#include <stdio.h>

int main(){
	int a, b, soma=0;
	
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Digite outro numero: ");
	scanf("%d",&b);
	
	soma=a+b;
	
	printf("Soma dos valores digitados: %d",soma);
	
	return 0;
};
