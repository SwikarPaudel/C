/*Write conditionael operator to evaluate the following functions
y=2.4x+3, for x<=2
y=3x-5, for x>2*/
#include<stdio.h>
#include<conio.h>
int main(){
	float x,y;
	printf("Enter any value");
	scanf("%f",&x);
	if(x<=2)(y=(2.4*x)+3);
	else(y=(3*x)-5);
	printf("The value of y is %f",y);
	getch();
	return 0;
	}
