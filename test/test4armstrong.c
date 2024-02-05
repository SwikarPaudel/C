/*WAP to find whether the given number is armstrong or not*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,a,b,c,d;
	printf("Enter any three digit number ");
	scanf("%d",&n);
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	d=pow(a,3)+pow(b,3)+pow(c,3);
	(n==d)?printf("Armstrong"):printf("not armstrong");
	return 0;
}
