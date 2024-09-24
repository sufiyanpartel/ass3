#include<stdio.h>
int main(){
	int number;
	int count;
	printf("enter the number");
	scanf("%d",&number);
	
	while(number>0){
		number=number/=10;
		count++;
	}
	printf("%d \n",count);
	
}
