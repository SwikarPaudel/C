//27. WAP to convert binary numbers to its equivalent decimal numbers.
//SWIKAR PAUDEL
#include<stdio.h>
#include<conio.h>
#include <math.h>
//converting decimal into binary
int convert(long num) {
  int decimal = 0, i = 0, rem;
  while (num != 0) {
    rem = num % 10;
    num =num / 10;
    decimal = decimal +rem * pow(2, i);
    ++i;
  }
  return decimal;
}
int main() {
  long num;
  printf("Enter any binary number: ");
  scanf("%ld", &num);
  printf("%ld in decimal is %d ", num, convert(num));
  return 0;
}
