//WAP to convert date in BS to date in AD using structure. Use the data difference of current data.
#include<stdio.h>
#include<conio.h>
struct date{
	int y,m,d;
};
void main()
{
	struct date ad,bs;
	printf("\n Enter the year, month and day in BS:");
	scanf("%d%d%d",&bs.y,&bs.m ,&bs.d);
	ad.d=bs.d-14;
	if(ad.d<=0)
	{
		ad.d=ad.d+30;
		bs.m=bs.m-1;
	}
	ad.m=bs.m-8;
	if(ad.m<=0)
	{
		ad.m=ad.m+12;
		bs.y=bs.y-1;
	}
	ad.y=bs.y-56;
	printf("Date in AD= %d/%d/%d",ad.y,ad.m,ad.d);
	getch();
}

