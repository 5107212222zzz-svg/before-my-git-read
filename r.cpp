#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int a=rand()%100+1  ;
	
//	printf("%d\n",a);

int x;

scanf("%d",&x);

while(a!=x){
	if(a<x)printf("Your number is bigger\n");
	else printf("YOur number is smaller\n");
	
	scanf("%d",&x);
}

printf("Congratulation!");
	
	return 0;
	
}
