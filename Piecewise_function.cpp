#include<stdio.h>
int main(){
	printf("Please enter an argument for the piecewise function\n");
	
	
	double a;
	
	scanf("%lf",&a);
	
	if(a<0) printf("f(x)=-1");
	
	 if(a==0)printf("f(x)=0");
	
	if(a>0)   printf("f(x)=%g",a*2);
	
	return 0;
}
