//WAP to read square matrix and replace diagonal by min value
#include<stdio.h>
#include<conio.h>
void readmatrix(int p[3][3])
{
	int i,j;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			scanf("%d",&p[i][j]);
			printf("\n");
		}
	}
}
int minfinder(int p[3][3])
{
	int i,j,min=p[0][0];
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			if(min>p[i][j])	min=p[i][j];
		}
	}
	return min;
}
void modifier(int p[3][3])
{
	int i,j,s;
	 s= minfinder(p);
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			if(j==i) p[i][j]=s;
		}
	}
}
void display(int p[3][3])
{
	int i,j;
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[3][3];
	printf("Enter 3x3 matrix");
	readmatrix(a);
	modifier(a);
	display(a);
	return 0;
}
