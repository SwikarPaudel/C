/*WAP to take marks in 5 subjects from students and calculate
 totak marks and percentage*/
 #include<stdio.h>
 #include<conio.h>
 int main(){
 	int a,b,c,d,e,total;
	 float percentage;
 	printf("Enter marks in 5 subject\n");
 	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 	total=a+b+c+d+e;
 	percentage=(float)total/5;
 	printf("Total=%d and percentage=%f",total,percentage);
 	getch();
	 	 return 0;
 }
