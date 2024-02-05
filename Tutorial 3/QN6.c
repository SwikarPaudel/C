/*6. WAP to generate following output
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5 */
//SWIKAR PAUDEL
 #include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,b,i;
for(i=0;i<5;i++){
a=(pow(10,i)+a);
b=a*(i+1);
printf("\n%d",b);
}
return 0;
}

