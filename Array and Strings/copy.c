//WAP to copy string without using string handling function
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	char str1[10],str2[10];
	printf("Enter two strings :");
	fflush(stdin);
	gets(str1);
	fflush(stdin);
	gets(str2);
	for(i=0;str2[i]!='\0';i++)
	{
		str1[i]=str2[i];
	}
	str1[i]='\0';
	puts(str1);
	getch();
}
