/*WAP to display three digit number in forward and reverse order*/
#include<conio.h>
#include<stdio.h>
int main(){
	int n,a,b,c,rev;
	printf("Enter the three digit number");
	scanf("%d",&n);
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	rev=(c*100)+(b*10)+a;
	printf("\nThe number in forward order is %d",n);
	printf("\nThe number in reverse order is %d",rev);
	return 0;
}

