//Wap to create structure of employees and calculate total salary using UDF
#include<stdio.h>
#include<conio.h>
struct employees{
	char name[15];
	int salary,id;
};
void totsal(struct employees c[5]);
void main()
{
	struct employees c[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nenter name,salary and id\n");
		scanf("%s%d%d",c[i].name,&c[i].salary,&c[i].id);
	}
    totsal(c);
}
void totsal(struct employees c[5])
{
	int total=0,i;
	for(i=0;i<5;i++)
	{
		total=total+c[i].salary;
	}
	printf("total salary=%d",total);
	
}
