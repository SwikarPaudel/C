//WAP to find sum of element using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,sum=0;
	printf("Enter the number of element");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		sum += *(a+i);
	}
	printf("Sum =%d",sum);
	
}
