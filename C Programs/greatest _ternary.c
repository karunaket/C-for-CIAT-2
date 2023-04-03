/* Develop a C program to find greatest of two numbers using ternary operator. */

#include <stdio.h>

int main() {
  int num1, num2, max;
  
  printf("Enter first number: ");
  scanf("%d", &num1);
  
  printf("Enter second number: ");
  scanf("%d", &num2);

  max = (num1 > num2) ? num1 : num2;
  
  printf("The greatest number is %d", max);
  
  return 0;
}
