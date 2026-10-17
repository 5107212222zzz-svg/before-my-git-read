#include<stdio.h>
int main(){
	printf("Please enter the amount(yuan)\n");
	
	double price;
	
	scanf("%lf",&price);
	
	printf("Please enter the face value(yuan)\n"); 
	
	double money;
	
	scanf("%lf",&money);
	
	if(price>money){
		printf("\n你妈故意找茬是不是？");
	}
	
	else 
	 {printf("Here is your change of %lf yuan",money-price);
	}
	
	
	
	
	return 0;
}
