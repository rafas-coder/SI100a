#include <stdio.h>
#include <stdlib.h>
int main() {
	int grau,i;
	float* coe;
	scanf("%d",&grau);
	coe = (float *)malloc(grau*sizeof(float));
	for(i = 0; i <= 2; i++){
		scanf("%f",coe[i]);	
	}
	for(i = 0; i <= 2; i++){
		printf("%f\n",coe[i]);
	}
}