#include<stdio.h>
#include<string.h>
	struct employee{
	char name[20];
	char address[20];
	char phone[10];
	}E[100];
	struct employee x;
int main()
{	
	int n,i,j,k;
	printf("enter the number of employee");
	scanf("%d",&n);
		printf("enter the name of the employee, address and phone number :");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
	 scanf("%s",E[i].name);
	 	fflush(stdin);
	 scanf("%s",E[i].address);
	 	fflush(stdin);
	 scanf("%s",E[i].phone);
	}
	 for(i=0;i<n-1;i++)
 {
 	for(k=i+1;k<n;k++)
{
	if((strcmp(E[i].name,E[k].name))>0)
	{
		x=E[i];
		E[i]=E[k];
		E[k]=x;
	}
}
	 }
	 for(i=0;i<n;i++)
	{
		printf("\nname=%s\n address=%s\n phone no.=%s\n",E[i].name,E[i].address,E[i].phone);
	}
return 0;
}
