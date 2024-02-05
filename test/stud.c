/*WAP to take marks of 5 subject and 
calculate total marks and percentage*/
#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,d,e,total;
	float percentage;
	printf("Enter marks in 5 subjects");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	percentage=(total/500)*100;
	printf("The total marks=%d and percentage= %f",total,percentage);
	return 0;
}
