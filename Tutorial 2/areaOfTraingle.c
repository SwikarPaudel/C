//WAP to read height and base of tringle and calculte its area.
#include<stdio.h>
#include<conio.h>
int main(){
	float b,h,area;
	printf("Enter base and height of triangle\n");
	scanf("%f%f",&b,&h);
	area=b*h/2;
	printf("The area of triangle is %f",area);
	getch();
	return 0;
}
