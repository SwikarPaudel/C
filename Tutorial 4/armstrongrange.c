//30. WAP to print all the Armstrong numbers between n1 and n2. Where n1 and n2 is entered by user.
//SWIKAR PAUDEL
#include<stdio.h>
#include<conio.h>
#include<math.h>
int armstrong(int n,int a);
int main(){
	int n1,n2,a,b,c,i;
	printf("Enter lower and upper limit");
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<n2;i++){
		a=i;
		b=0;
		while(a!=0){
			b++;
			a=a/10;	}
		c=armstrong(i,b);
		if(c==i)printf("\n%d",i);	
	}
	return 0;
}
int armstrong(int n,int a){
	int sum=0,b;
	while(n!=0){
		b=n%10;
		n=n/10;
	sum=pow(b,a)+sum;
	}
	return sum;
}
