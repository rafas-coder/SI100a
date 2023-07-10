#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct aluno{
	char nome[105];
	int ra;
	float P1;
	float P2;
};
int main(){
	int nalun,i,bas;
	scanf("%d",&nalun);
	struct aluno* classe;
	char nada[150];
	int tamanho;
	classe = (struct aluno*)malloc(nalun*2*sizeof(struct aluno));
		for(i = 0;i < nalun; i++){
		fgets(classe[i].nome,102,stdin);
		fgets(classe[i].nome,102,stdin);
		//printf("%s",classe[i].nome);
		scanf("%d",&classe[i].ra);
		//printf("%d\n",classe[i].ra);
		scanf("%f",&classe[i].P1);
		//printf("%f\n",classe[i].P1);
		scanf("%f",&classe[i].P2);
		//printf("%f\n",classe[i].P2);
		}
	for(i = 0; i < nalun; i++){
		tamanho = strlen(classe[i].nome);
		classe[i].nome[tamanho-1] = '\0';
		printf("%d\t%s\t%.2f\n",classe[i].ra,classe[i].nome,(classe[i].P1+classe[i].P2)/2);
	}
}
