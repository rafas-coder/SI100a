#include<stdio.h>

int main(){
	struct ponto{
	double cord1;
	double cord2;
	}pont1,pont2;
	scanf("%lf %lf",&pont1.cord1,&pont1.cord2);
	scanf("%lf %lf",&pont2.cord1,&pont2.cord2);
	if(((pont1.cord1)/(pont2.cord1))>= 0.9999 && ((pont1.cord1)/(pont2.cord1)) <= 1.0001 &&
	  ((pont1.cord2)/(pont2.cord2)>= 0.9999 && ((pont1.cord2)/(pont2.cord2)) <= 1.0001)){
		printf("os pontos sao iguais\n");
	}else{printf("os pontos nao sao iguais\n");}
	
}