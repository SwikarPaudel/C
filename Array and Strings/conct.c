//WAP to concatenate two strings without using string handling function
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char a[100],b[100];
	printf("Enter two string:\n");
	fflush(stdin);
	gets(a);
	fflush(stdin);
	gets(b);
	for(i=0;a[i]!='\0';i++);
	
		for(j=0;b[j]!='\0';j++)
		{
			a[i]=b[j];
			i++;
		}
	
	a[i]='\0';
	puts(a);
	getch();
}
