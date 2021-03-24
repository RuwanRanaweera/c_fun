#include<stdio.h>
int sum( );
int sub( );
int main(){
	
	int add=sum();
	printf("sum 1 : %d\n",add);
	
	printf("sub1 1 : %d",sub());
	
	
	
}

int sum( ){
	
	int num1=10,num2=20,sum1;
	sum1=num1+num2;
	
	return sum1;
	
	
}

int sub( ){
	
	int num1=50,num2=20,sub1;
	sub1=num1+num2;
	
	return sub1;
	
	
}