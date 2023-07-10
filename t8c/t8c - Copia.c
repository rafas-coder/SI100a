#include<stdio.h>
int main(){
	double a;
	struct b{
	double c;
	double d;
	char e[20];
	}f;
	scanf("%lf",&f.c);
	scanf("%lf",&f.d);
	fgets(&f.e,19,stdin);
	a = f.d/(f.b*f.b);
	a = roundf(a*1000)/1000;
	printf("%.3lf\n",a);
}