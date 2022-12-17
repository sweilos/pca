//conversor de metros para centímetros
#include <stdio.h>

int main(){
	float metros, centimetros=0;
	
	printf("Digite o valor em metros, para ser convertido para centimetros: ");
	scanf("%f",&metros);
	
	centimetros=metros*100;
	
	printf("Valor convertido: %.3f cm",centimetros);
}
