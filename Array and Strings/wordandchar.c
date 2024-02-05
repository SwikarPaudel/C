//WAP to read a sentence and count the number of characters and words in that sentence.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,word=1;
	char s[100];
	printf("Enter a sentence:\n");
	fflush(stdin);
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')word++;
	}	
	printf("character=%d and word=%d",i,word);
	getch();
}
