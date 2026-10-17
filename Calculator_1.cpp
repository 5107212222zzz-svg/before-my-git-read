#include<stdio.h>
int main(){
	printf("Please enter two numbers and a operator\nLike this\n2 3 +\n");
	
	char op;
	
	int a, b;
	
	scanf("%d %d %c",&a,&b,&op);
	
	if (op!='+'&&op!='-'&&op!='/'&&op!='*') {
		
	printf("Input error!");
	return 1;}
	
	else if(op=='/'&&b==0) printf("Division by zero");
	
	else if (op=='/'&&b!=0) printf("%d",a/b);
	
	else if (op=='*') printf("%d",a*b);
	
	else if(op=='+') printf("%d",a+b);
	
	else printf("%d",a-b);
	
	return 0;
	
	
}
