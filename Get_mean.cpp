#include<stdio.h>
int main(){
	int count=0;
	
	int x=0;
	
	int sum=0;
	
	scanf("%d",&x);
	
	while(x!=-1)
	{
	count++;
	
	sum+=x;
	
	scanf("%d",&x);}
	
	if(count>0)
	
	printf("The mean is %g",(double)sum/count);
	
	else printf("No numbers entered");
	
	return 0;
	
}
