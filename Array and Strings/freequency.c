//WAP to count the frequency of number
#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],i,n,s,counter=0;
	printf("How many numbers?\n");//Taking number of terms
	scanf("%d",&n);
		printf("\nEnter number for counting frequencies\n");
	//taking number for counting frequency
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number yo want to check frequency\n");
	scanf("\n%d",&s); //number which frequency to be count
	//counting the frequency
	for(i=0;i<n;i++){
		if(a[i]==s)counter++;
	}
	printf("\nThe frequency of %d is %d",s,counter);
	getch();
	return 0;}
