#include<stdio.h>
int main (){
	 double a, b,c;
	
	printf("Please enter three numbers\n");
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double max=b,min=a,mid;
	
	if(a>b) max=a,min=b;
	
	if (max<=c) max=c;
	
	else {if(c<=min)min=c;
	
	}
	
	mid=a+b+c-max-min;
	
	printf("%.2f>%.2f>%.2f",max,mid,min);
	
	return 0;
}
