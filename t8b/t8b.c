#include<stdio.h>
int main(){
	int px1,py1,px2,py2;
	struct rect{
	int cordx;
	int cordy;
	}r1es,r1dr,r2es,r2dr;
	scanf("%d %d",&r1es.cordx,&r1es.cordy);
	scanf("%d %d",&r1dr.cordx,&r1dr.cordy);
	scanf("%d %d",&r2es.cordx,&r2es.cordy);
	scanf("%d %d",&r2dr.cordx,&r2dr.cordy);
	if( r2es.cordx >= r1es.cordx && r2es.cordy >= r1es.cordy &&
	    r2dr.cordx <= r1dr.cordx && r2dr.cordy <= r1dr.cordy){
		printf("o segundo retangulo esta contido no primeiro\n");
	}else{printf("o segundo retangulo nao esta contido no primeiro\n");}
	
}