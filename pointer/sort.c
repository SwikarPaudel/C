//WAP to sort number using pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,temp,a[100],n;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	printf("Enter number for sorting:\n");
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		}
	}
	printf("Sorted list:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(a+i));
	}
	getch();
}
