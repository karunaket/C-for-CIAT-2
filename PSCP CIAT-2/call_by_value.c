#include<stdio.h>

int swap(int, int);

int main()
{
  int a = 10, b = 20;

  printf("Before Swapping:\na = %d and b = %d\n", a, b);

  swap(a, b);

  printf("After Swapping:\na = %d and b = %d", a, b);
  
  return 0;
}

int swap(int x, int y)
{
  int temp = x;
  x = y;
  y = temp;
}