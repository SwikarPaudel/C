//Program to concatenate two strings
#include<stdio.h>
#include<string.h>
int main(){
	char fname[100]="Swikar";
	char lname[10]="Paudel";
	int i,j;
	for(i=0;fname[i]!='\0';i++);
		for(j=0;lname[j]!='\0';j++){
			fname[i]=lname[j];
			i++;
		}
//	fname[i]='\0';
		puts(fname);
	return 0;
	
}
