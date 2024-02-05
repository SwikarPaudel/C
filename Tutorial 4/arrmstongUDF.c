//25. WAP to check if the entered number is Armstrong or not
//SWIKAR PAUDEl
#include<stdio.h>
#include<conio.h>
#include<math.h>
//Finding no of terms
int digitalcalculator(int n){
	int i=0;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	return i;
	}
	//checking armstrong
	int armstrong(int n){
		int i,sum=0,r;
		i=digitalcalculator(n);
		while(n!=0)
		{
			r=n%10;
			n=n/10;
			sum=sum+pow(r,i);
		}
		return sum;
	}
	int main()
	{
		int n,sum;
		printf("Enter a numbre");
		scanf("%d",&n);
		sum=armstrong(n);
		(n==sum)?printf("Armstrong number"):printf("Not Armstrong number");
	return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

