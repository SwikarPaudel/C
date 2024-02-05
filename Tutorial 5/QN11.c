//11. 2 15 41 80 132 197 275 366 470 587
//SWIKAR PAUDEL
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=2,i,n,b=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("The series is :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        a+=13*i;
        b+=a;
    }
    printf("\nThe sum of series= %d",b);
}

