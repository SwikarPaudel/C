#include<stdio.h>
#include<conio.h>
struct employee
{
char address[20];
float salary;
struct person
{
char name[50];
int age;
}p;
};
int main()
{
struct employee s;
printf("Enter name:");
scanf("%s",s.p.name);
printf("Enter address:");
scanf("%s",s.address);
printf("Enter age:");
scanf("%d",&s.p.age);
printf("Enter salary:");
scanf("%f",&s.salary);
printf("Name=%s\nAddress=%s\nAge=%d\nSalary=%f",s.p.name,s.address,s.p.age,s.salary);
getch();
return 0;
}

