#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n,a=4321,b=10,c=1;
	for(i=1;i<=4;i++)
	{
		
		for(j=i;j<=4;j++)
		{
			printf(" ");
				
		}
		
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	//	printf("%d",c);

		n=a%b;
			b=b*10;
		printf("%d",n);
		printf("\n");
		
	}
	
}
