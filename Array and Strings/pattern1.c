#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i,j;
	char str[]="NepaL";
	for(i=0;str[i]!='\0';i++){
		for(j=0;j<=i;j++){
			putchar(str[j]);
					}
					printf("\n");
	}
	return ;
}
