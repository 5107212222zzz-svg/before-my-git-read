#include<stdio.h>
int main(){
	printf("Please enter three numbers\n");
	
	double a,b, c;
	
	
	
	if(scanf("%lf %lf %lf",&a,&b,&c)!=3) {printf("Input error!\n");
	
	return 1;
	}
	

	
	double x=0;
	
	if(a<=b){x=a,a=b,b=x;
	}
	if(a<=c){x=a,a=c,c=x;
	}
	if(b<=c){x=b,b=c,c=x;
	}
	
	
	printf("%.2f>%.2f>%.2f",a,b,c);
	
	return 0;
	
	
}
