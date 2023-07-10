#include <stdio.h>
#include <string.h>
int main(){
	char string[81];
	int i;
	fgets(string, 80, stdin);
	for(i = 0; i < strlen(string);i++){
		if(string[i] >= 65 && string[i] <= 90){
		string[i] = ("%c",string[i]+32);
		}
	}
	for(i = 0; i < strlen(string)/2;i++){
		if (string[i] != string[strlen(string)-i-2]){
			printf("Esta palavra nao e um palindromo\n");
			break;
		}
		
	}
	if(i == strlen(string)/2){
		printf("Esta palavra e um palindromo\n");	
	}
}