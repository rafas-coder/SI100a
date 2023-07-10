#include<stdio.h>
int main(){
	double imc;
	struct corpo{
	double altura;
	double peso;
	char nome[20];
	}paciente;
	scanf("%lf",&paciente.altura);
	scanf("%lf",&paciente.peso);
	fgets(&paciente.nome,19,stdin);
	imc = paciente.peso/(paciente.altura*paciente.altura);
	imc = roundf(imc*1000)/1000;
	printf("%.3lf\n",imc);
}