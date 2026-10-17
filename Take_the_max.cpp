#include<stdio.h>
int main (){
	printf("Plesse enter three integers\n");
    
    int a, b ,c;
    
	scanf("%d %d %d",&a,&b,&c);
	
	int max=a;
	
	if(max<=b) max=b;
	
	if(max<=c) max=c;
	
	printf("The lagest number is %d",max);
	
	return 0;
}
