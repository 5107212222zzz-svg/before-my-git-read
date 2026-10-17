#include<stdio.h>
int main (){
	const int pass=60;
	
	int score=0;
	
	printf("Please enter your score:");
	
	scanf("%d",&score);
	
	printf("Your score is %d\n",score);
	
	if(score<pass) printf("I am sorry that your score is not passed\n");
	
	else {
	
	printf("Congratulation on passing your examination\n");
	
	printf("Goodbye");
	}
	
	return 0;
}
