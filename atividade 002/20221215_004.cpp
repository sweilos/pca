#include <stdio.h>
#include <math.h>

int main(){
	float raio;
	float area=0.0;
	printf("Digite o raio do circulo: ");
	scanf("%f",&raio);
	area = M_PI * pow(raio,2);
	printf("Valor da area do circulo: %.2f", area);
}
