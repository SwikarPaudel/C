#include<stdio.h>
#include<conio.h>
int main()
{
	struct student{
	char name[20];
	};
	struct student s1={"Gita"};
		struct student s2={"Ram"};
			struct student s3={"Shyam"};
			printf("\nName=%s",s1.name);
			printf("\nName=%s",s2.name);
			printf("\nName=%s",s3.name);
			return 0;
}
