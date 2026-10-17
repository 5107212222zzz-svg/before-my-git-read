#include<stdio.h>
int main(){
	printf("Please enter your score\n");
	
	
    double sc;
	scanf("%lf",&sc);
	
	if(90<sc&&sc<=100) printf("Your score is Exllent");
	
	else  if(60<sc&&sc<=90) printf("Your score is Passed ");
	
	else if(0<=sc&&sc<=60) printf("Your score is Fail");
	
	else printf("input error");
	
	return 0;
}
