//WAP to enter 4 digits number and find sum of its digits
#include<stdio.h>
#include<conio.h>
int main(){
	int n,sum,i,r;
	i=1;
	sum=0;
	printf("Enter four digit number");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		n=n/10;
		sum=sum+r;
		i++;
	}
	printf("sum=%d",sum);
	getch();
	return 0;
}
