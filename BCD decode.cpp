#include<stdio.h>
int main(){
	int a;
	
	scanf("%d",&a);
	
	int n1=a/16,n2=a%16;
	
	printf("%d",n1*10+n2);
	
	return 0;
}
