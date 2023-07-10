#include<stdio.h>
#include<math.h>
double soma(double x,double y){
return x + y;
}
double produto(double x, double y){
return x*y;
}
double sub(double x, double y){
return x-y;
}
double div(double x, double y){
return x/y;
}
double pot(double x, double y){
return pow(x,y);
}
int main(){
char modo;
double x,y;
scanf("%lf%c%lf",&x,&modo,&y);
if(modo == '*'){printf("%.3lf\n",produto(x,y));}
if(modo == '+'){printf("%.3lf\n",soma(x,y));}
if(modo == '-'){printf("%.3lf\n",sub(x,y));}
if(modo == '/'){printf("%.3lf\n",div(x,y));}
if(modo == '^'){printf("%.3lf\n",pot(x,y));}
}