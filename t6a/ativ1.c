#include <stdio.h>
#define N 20

int main(){
	int m1[N][N],mtrans[N][N];
	int NUM_LIN,NUM_COL,l,c;
	scanf("%d %d",&NUM_LIN,&NUM_COL);
	for(l = 0; l < NUM_LIN; l++){
		for(c = 0; c < NUM_COL; c++){
			scanf("%d",&[l][c]);
		}
	}
	for(l = 0; l < NUM_COL; l++){
		for(c = 0; c < NUM_LIN; c++){
			printf("%d ",tabela[c][l]);
		}
		printf("\n");
	}
}
	
	
