/*WAP to  find whether the given number is palindrome or not*/
#include<stdio.h>
#include<conio.h>
int main(){
	int n,a,b,c,d;
	printf("Enter any three digit number ");
	scanf("%d",&n);
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	d=(c*100)+(b*10)+a;
	(n==d)?printf("\nPalindrome"):printf("\nNot Palindrome");
	return 0;	
}
