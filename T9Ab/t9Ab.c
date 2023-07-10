#include<stdio.h>
#include<math.h>
double med_arit(double x, double y){
	double med = x + y;
	med /= 2;
	return med;
}
double med_geo(double x, double y){
	double med = x * y;
	med = sqrt(med);
	return med;
}
int main(){
	char seletor = getchar();
	double n1,n2;
	scanf("%lf %lf",&n1,&n2);
	if(seletor == 'A'){
	printf("%.3lf\n",med_arit(n1, n2));
	}else{
	printf("%.3lf\n",med_geo(n1, n2));
	}
	
}