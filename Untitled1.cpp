#include<stdio.h> 
int main(){
	int x;
	
	scanf("%d",&x);
	
	int type;
	
	if (x<0) type=1;
	else if(x=0) type=2;
	
	else  type=3;
	
	switch(type){
		
		case(1):printf("f=-1");
		break;
		
		case(2):printf("f=0");
		break;
		
		case(3):printf("%d",x*2);
		break;
		
		
	}
	
	return 0;
	
	
}
