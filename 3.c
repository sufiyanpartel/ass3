#include<stdio.h>
int main(){
	int num,lastdigit,firstdigit;
	printf("enter the any number");
	scanf("%d",&num);
	
	int sum=0;
	lastdigit=num%10;
	sum=sum+lastdigit;
	
	while(num>=9){
		num=num/10;
	}
	firstdigit=num;
	sum=sum+firstdigit;
	printf("%d",sum);	
}
