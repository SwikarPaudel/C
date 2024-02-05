//Pogram to display armstrong range
#include<stdio.h>
#include<conio.h>
#include<math.h>
int armstrong(int n,int a);
int main(){
	int n,m,a,b,c,i;
	printf("Enter lower and upper limit");
	scanf("%d%d",&n,&m);
	for(i=n+1;i<m;i++){
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
