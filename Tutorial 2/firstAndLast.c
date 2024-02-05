/*WAP to enter 4-digit number and find the sum of first 
and last digit of the number*/
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
		if((i==1)||(i==4))sum=sum+r;
		i++;
	}
	printf("sum=%d",sum);
	getch();
	return 0;
}
