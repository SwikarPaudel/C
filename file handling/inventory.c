
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct records{
	int quantity;
	float rate;
	float total;
};
void main()
{
	struct record r;
	FILE *fp;
	int i;
	clrscr();
	fp=fopen("INVENTORY","wb");
	if(fp=NULL)
	{
		printf("\n File cannot be opened");
		getch();
		exit(1);
	}
	for(i=0;i<3;i++)
	{
		printf("\nEnter item quantity and rate: ");
		scanf("%d%f",&r.quantity,&r.rate);
		fwrite(&r,sizeof(r),1,fp);
	}
	r.total=r.quantity*r.rate;
	fclose(fp);
	fp=fopen("INVENTORY","rb");
	if(fp=NULL)
	{
		printf("\n FILe cannot be opened");
		getch();
		exit(1);
	}
	while(fread(&sizeof(r),1,fp)=1)
	{
		printf("\nQuantity =%d",r.quantity);
		printf("\nRate=%f",r.rate);
		printf("\nTotal=%f",r.total);
	}
	getch();
}
