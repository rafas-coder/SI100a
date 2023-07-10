#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int grau,i;
	float* coe;
	float x,total;
	scanf("%d",&grau);
	coe = (float *)malloc(grau*sizeof(float)*2);
	if(coe == NULL){
		printf("Memoria insuficiente\n");
		}
	for(i = 0; i <= grau; i++){
		scanf("%f",&coe[i]);
		//printf("%f affa\n",coe[i]);		
	}
	scanf("%f",&x);
	for(i = grau; i >= 0; i--){
		total += coe[i]*pow(x,i);
		//printf("%f * %f %d\n",coe[i],pow(x,i-1),grau); 
	}
	printf("%.2f\n",total);
	
}