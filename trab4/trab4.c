#include<stdio.h>
#include<string.h>
	struct PerRes{
		int controle;
		char pergunta[121];
		int respostaint;
		double respostafloat;
	};
struct PerRes INT(char pergunta[120]){
	struct PerRes dados;
	int i;
	dados.controle = 0;
	dados.respostafloat = 0;
	strcpy(dados.pergunta, pergunta);
	int alternativas[5];
	char respostas[3][10];
	for(i = 0; i < 3; i++){
		scanf("%d",&alternativas[i]);
	}
	fgets(respostas[i],9,stdin);
	for(i = 0; i < 3; i++){
		fgets(respostas[i],9,stdin);
		printf("Alternativa correta eh %d?\n",alternativas[i]);
		//printf("int resps %s",pergunta);
		if (strcmp(respostas[i], "SIM\n") == 0) {
            dados.respostaint = alternativas[i];
            return dados;
		}}
	
}
struct PerRes FLOAT(char pergunta[120]){
	struct PerRes dados;
	int i;
	dados.controle = 1;
	dados.respostaint = 0;
	strcpy(dados.pergunta,pergunta);
	double alternativas[5];
	char respostas[3][11];
	for(i = 0; i < 3; i++){
		scanf("%lf",&alternativas[i]);
	}
	fgets(respostas[i],9,stdin);
	for(i = 0; i < 3; i++){
		printf("Alternativa correta eh %.2lf?\n",alternativas[i]);
		//printf("float %s",respostas[i]);
		fgets(respostas[i],10,stdin);
		if (strcmp(respostas[i], "SIM\n") == 0) {
            dados.respostafloat = alternativas[i];
            return dados;
		}}
	
}
int main(){
	struct PerRes Per[5];
	char controle[121];
	char pergunta[121];
	int i = 0;
	int k = 0;
	printf("---Etapa de treinamento---\n");
	fgets(pergunta, 120, stdin);
	i = 0;
	while( strcmp(pergunta, "FIM\n") != 0){
	//printf("while %s\n",pergunta);	
	if (strcmp(pergunta, "INT\n") == 0){
		fgets(pergunta, 120, stdin);
		Per[i] = INT(pergunta);
		i++;
		//printf("pergunta e numero dela %d %s",i,Per[i].pergunta);
		}
	if (strcmp(pergunta, "FLOAT\n") == 0){
		fgets(pergunta, 120, stdin);
		Per[i] = FLOAT(pergunta);
		i++;
	}
	//printf("%s",pergunta);
	fgets(pergunta, 120, stdin);
}
   	printf("---Etapa de testes---\n");
   	fgets(pergunta, 120, stdin); 		
   	while(strcmp(pergunta, "FIM\n") != 0){
		//printf("testes %s",pergunta);
			for(i = 0; i < 6 ; i++){
				//printf("pergunta %s",Per[i].pergunta);
				if (i == 5){
					printf("Me desculpe, ainda não fui treinado para responder essa pergunta.\n");
					//printf("pergunta %s",Per[i].pergunta);
				}
				if (strcmp(pergunta, Per[i].pergunta) == 0 && Per[i].controle == 0){
					printf("A resposta eh: %d\n",Per[i].respostaint);
					break;
					}
				
				if(strcmp(pergunta, Per[i].pergunta) == 0 && Per[i].controle == 1){
					printf("A resposta eh: %.2f\n",Per[i].respostafloat);
					break;
					}
					}		
				fgets(pergunta,120,stdin);
				}
			
			return 0;
			
		}
   		
