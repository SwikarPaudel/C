//WAP to read a list of word and arrange in dictionary order using UDF
#include<stdio.h>
#include<conio.h>
#include<string.h>
void read(char s[][100], int n)
{
	int i;
	fflush(stdin);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
}
void arrange(char s[][100],int n)
{
	int i,j;
	char temp[100];
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if((strcmp(s[j],s[j+1]))>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
}
void display(char s[][100], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		puts(s[i]);
	}
}
void main()
{
	int n;
	char s[100][100];
	printf("Enter the number of words:");
	scanf("%d",&n);
	read(s,n);
	arrange(s,n);
	display(s,n);
	getch();
}
