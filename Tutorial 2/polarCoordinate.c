// WAP to convert Cartesian coordinates to polar coordinates.
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float x,y,r,theta;
	printf("Enter x and y coordinates\n");
	scanf("%f%f",&x,&y);
	r=sqrt(pow(x,2)+pow(y,2));
	theta=atan(y/x);//(thetaINradian
	theta=180*theta/3.14;
	printf("The polar coordinate is %f,%f",r,theta);
	getch();
	return 0;	
}
