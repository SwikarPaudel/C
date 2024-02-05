/*WAP to swap variable using third variablle*/
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("The unswapped values are %d and %d",a,b);
	/*	c=a;     USING THIRD VARIABLE
	a=b;
	b=c;*/
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nThe swapped values are %d and %d",a,b);	
	return 0;
	
	
}
