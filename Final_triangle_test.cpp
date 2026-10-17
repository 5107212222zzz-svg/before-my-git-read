#include<stdio.h>
int main(){
	printf("Please enter three side lengths of triangle:\n");
	
	double a,b ,c;
	
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double d,e,Max,sum;
	
	if(a<=b){d=a,e=b;
	}
	else{d=b,e=a;
	}
	
	if(e>=c){Max=e,sum=c+d;
	}
	else{Max=c;sum=e+d;
	}
	
	if (Max>=sum){printf("These three sides cannot form a triangle");
	}
	
	else{printf("The perimeter of this triangle is %lf",Max+sum);
	}
	
	return 0;
}
