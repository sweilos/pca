//media de 4 notas
#include <stdio.h>

int main(){
	float notas, media=0;
	
	for(int i=0; i<4; i++){
		printf("Digite a %d%c nota: ",i+1,167);
		scanf("%f",&notas);
		media+=notas;	
	}
	
	printf("Media das 4 notas: %.1f",media/4);
	
	return 0;
}
