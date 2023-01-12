/*programa que lê dois valores inteiros entre 0 e 1000
 e retorna o percentua do menor em relação ao maior
 e o módulo da diferença entre o maior e o menor*/

#include <cstdio>
#include <cstdlib>
void scanIntIntervalo (int *x, int *y){
	int x1,y1;
	printf("Digite um numero entre 0 e 1000: ");
	scanf("%d",&x1);
	if(x1>=0 && x1<=1000){
		*x=x1;
	}else{
		printf("\nValor fora do intervalo!!\nDigite um valor entre 0 e 1000: ");
		scanf("%d",&x1);
		*x=x1;
	}
	printf("Digite um numero entre 0 e 1000: ");
	scanf("%d",&y1);
	if(y1>=0 && y1<=1000){
		*y=y1;
	}else{
		printf("\nValor fora do intervalo!!\nDigite um valor entre 0 e 1000: ");
		scanf("%d",&y1);
		*y=y1;
	}
	
	if(y1>=0 && y1<=1000){
		*y=y1;
	}
}

float percentual(int x, int y){	
	if(x>y){
		return (y*100)/x;
	}else
		if(x<y){
			return (x*100)/y;
		}else
			return 0;
}

int absdif(int x, int y){
	if(x>y){
		return abs(x-y);
	}else
		if(x<y){
			return abs(y-x);
		}else
			return 0;
}
int main(){
	int x,y;
	scanIntIntervalo (&x,&y);
	printf("\n%d,%d",x,y);
	printf("\n%.2f%c",percentual(x,y),37);
	printf("\n%d",absdif(x,y));
	return 0;
}
