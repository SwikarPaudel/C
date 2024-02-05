//WAP to add two distance given in feet and inch format using structure
#include<stdio.h>
#include<conio.h>
void main()
{
	struct distance{
		int feet;
		int inches;
	}d1,d2,s;
	int t1,t2,t;
	printf("Enter first distance:");
	scanf("%d%d",&d1.feet,&d1.inches);
	printf("Enter second distance:");
	scanf("%d%d",&d2.feet,&d2.inches);
	t1=d1.feet*12+d1.inches;
	t2=d2.feet*12+d2.inches;
	t=t1+t2;
	s.feet=t/12;
	s.inches=t%12;
	printf("The sum of two distance = %d feet %d inches",s.feet,s.inches);
	getch();
}

