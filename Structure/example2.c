//pass by value
//WAP to add two complex number
#include<stdio.h>
#include<conio.h>
struct complex{ 
		int real;
		int imag;
	};
	void addcomplex(struct complex c1,struct complex c2);
void main()
{
	struct complex c1={5,3};
	struct complex c2={9,3};
	addcomplex(c1,c2);
}
void addcomplex(struct complex c1,struct complex c2){
	printf("Real=%d",c1.real+c2.real);
	printf("\nImaginary%d",c1.imag+c2.imag);	
}
