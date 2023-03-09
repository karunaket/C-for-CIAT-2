#include<stdio.h>

int main()
{
  int a = 10, b = 20;

  printf("Before swapping:\na = %d and b = %d\n", a, b);

  swap(&a, &b);

  printf("After swapping:\na = %d and b = %d", a, b);

  return 0;
}
int swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}