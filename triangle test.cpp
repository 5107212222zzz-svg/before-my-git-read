#include<stdio.h>
int main(){
	printf("Please enter the three side lengths of the triangle from the largest to the smallest:\n");
	
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	if (a>=b+c){printf("These side lengths cannot form a triangle.");
	}
	
	else{printf("The perimeter of this triangle is %lf",a+b+c);
	}
	
	return 0;
}

