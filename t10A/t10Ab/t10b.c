#include <stdio.h>
#include <stdlib.h>
int main(){
	int l,c,i,j;
	int** mat;
	int** trmat;
	scanf("%d",&l);
	scanf("%d",&c);
	mat = (int**)malloc((l)*sizeof(int*));
	for(i = 0;i < l;i++){
		mat[i] = (int*)malloc((c)*sizeof(int));
	}
	for(i = 0; i < l;i++){
		for(j = 0; j<c;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	trmat = (int**)malloc((c)*sizeof(int*));
	for(i = 0;i < c;i++){
		trmat[i] = (int*)malloc((l)*sizeof(int));
	}
	for(i = 0; i < c;i++){
		for(j = 0; j < l; j++){
		trmat[i][j] = mat[j][i];
		}
	}
	for(i = 0; i < l;i++){
		for(j = 0; j<c;j++){
			if(mat[i][j] != trmat[i][j]){
			printf("Nao eh simetrica\n");
			return 0;
			}
		}
	}
	if(j == i){
		printf("Eh simetrica\n");
	}
	
}