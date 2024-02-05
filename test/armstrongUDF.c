//Check armstrog or not 
#include<stdio.h>
#include<conio.h>
#include<math.h>
int armstrong(int n);
int digitalcalculator(int n);
int main(){
	int n,sum,i;
	printf("Enter any number");
	scanf("%d",&n);
	sum=armstrong(n);
	(n==sum)?printf("Armstrong"):printf("Not Armstrong");
	return 0;
}
int armstrong(int n){
	int i,sum=0,r;
	i=digitalcalculator(n);
	while(n!=0){
		r=n%10;
		n=n/10;
		sum= sum+pow(r,i);
			}

	return sum;
}
int digitalcalculator(int n){
	int i=0;
	while(n!=0){
		n=n/10;
		i++;
	}
	return i;
}
