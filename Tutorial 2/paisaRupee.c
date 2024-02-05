//WAP for asking cost of pen in paisa.Convert it into nearest paisa.
#include<stdio.h>
#include<conio.h>
int main(){
	int p,r,ps;
	printf("Enter amount in paisa");
	scanf("%d",&p);
	r=p/100;
	ps=p%100;
	printf("The amount is %d rupee and %d paisa",r,ps);
	getch();
	return 0;
}
