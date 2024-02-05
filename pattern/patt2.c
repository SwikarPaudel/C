#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	char ch[]="PULCHOWK";
	for(i=1;i<=8;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i%2==0)
			{
			putchar(ch[j]);
			}
			else
			{
				if(j%2==0)
				{
					putchar(ch[j]);
				}
				else
				{
					putchar(ch[j]+32);
				}
			}
		
		}
		putchar('\n');
	}
}
