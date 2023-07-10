#include<stdio.h>
double esfera(double raio){
	double pi=3.14159;
	return (pi*raio*raio*raio*1.3333333);
}

int main(){
	double raio;
	scanf("%lf",&raio);
	printf("%.2lf\n",esfera(raio));	
}