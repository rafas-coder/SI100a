#include <stdio.h>
#include <string.h>
int main(){
	char string[81],rstring[81];
	int i;
	fgets(string, 80, stdin);
	for(i = 0; i < strlen(string);i++){
		rstring[i]= string[strlen(string)-2-i];
	}
	puts(rstring);
}