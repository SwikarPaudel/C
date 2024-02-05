#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[]="pulchowk";
	int i,j,k;
	for(i=1;i<=8;i++)
	{
		for(j=7-i;j>=0;j--)
		{
			printf(" ");
		}
		for(k=8-i;k<8;k++)
		{
			putchar(ch[k]);
		}
		printf("\n");
	}
}
