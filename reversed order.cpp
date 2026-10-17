#include<stdio.h>
int main(){
	int a;
	
	scanf("%d",&a);
	
	int b=a/100,c=(a-b*100)/10,d=a%10;
	
	printf("%d",d*100+c*10+b);
	
	return 0;
}
