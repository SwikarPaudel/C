/*5. WAP to generate following output
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5 */
//SWIKAR PAUDEL
#include<stdio.h>
#include<conio.h>
int main(){
int a,i;
for(i=1;i<=5;i++){
a=a*10+i;
printf("\n%d",a);
}
getch();
return 0;
}

