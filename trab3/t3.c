#include <stdio.h>
#include <math.h>
int main(){
	int tabela[10][10],maxmin[10],referencia[10],ranking[10],j;
	double tabela2[10][10],normalizador[10],i;
	double score[10] = {0},divisao;
	int l,c,N;
	scanf("%d",&N);
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			scanf("%d",&tabela[l][c]);
		}
	}
	for(c = 0; c < N; c++){
		scanf("%d",&maxmin[c]);
	}
	
	for(c = 0; c < N; c++){
		scanf("%lf",&normalizador[c]);
	}
	printf("Matriz original\n");
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			printf("%d\t",tabela[l][c]);
		}
		printf("\n");
	}
	for(c = 0; c < N; c++){
		referencia[c] = tabela[0][c];
		for(l = 0; l < N-1; l++){
			if((referencia[c])*(maxmin[c]) < (tabela[l+1][c])*(maxmin[c])){
					referencia[c] = tabela[l+1][c];	
			}
		}
	
	}
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			i = tabela[l][c];
			if(maxmin[c] > 0){
				divisao =(double) (i/referencia[c]);
				tabela2[l][c] = divisao;
			}else{
				divisao = (double) (referencia[c]/i);
				tabela2[l][c] = divisao;
			}
		}
	}
	printf("\nMatriz normalizada\n");
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			printf("%.4lf\t",tabela2[l][c]);
		}
		printf("\n");
	}
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			tabela2[l][c] = (roundf(tabela2[l][c]*100)*normalizador[c]);
			tabela2[l][c] = roundf(tabela2[l][c]);
			
		}
	}
	printf("\nMatriz multiplicada pelos pesos\n");
	for(l = 0; l < N; l++){
		for(c = 0; c < N; c++){
			tabela2[l][c] /= 100;
			printf("%.2lf\t",tabela2[l][c]);
		}
		printf("\n");
	}
	for(l = 0; l < N; l++){
		score[l] = 0;
		for(c = 0; c < N; c++){
			score[l] += tabela2[l][c];	
		}
	}
	for(l = 0; l < N; l++){
		ranking[l] = 0;
		for(j = 0; j < N; j++){
			if(score[l] < score[j]){
				ranking[l] += 1;
				}
			}
		}
	printf("\n-----Resultado final-----\n");
	for(c = 0; c < N; c++){
	printf("Alternativa %d| Score: %.2lf| Rank: %d\n",c,score[c],ranking[c]);
	}
}
