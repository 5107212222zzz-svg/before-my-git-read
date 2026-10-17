#include<stdio.h>
int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	
	int h=a/100,m=a%100,t1=h*60+m;
	
	int c=t1+b;
	
	printf("%d",(c/60)*100+c%60);
	
	return 0;
}
