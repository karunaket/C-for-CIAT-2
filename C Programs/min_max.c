/* Develop a C program to find the maximum and minimum elements using a one-dimensional array.*/

#include <stdio.h>

int main()
{
  int n, i, max, min;

  printf("How much elements do you want to enter in an array? \n");
  scanf("%d", &n);

  int a[n];

  printf("Enter the elements:\n");
  for(i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }

  max = a[0];
  min = a[0];
  
  for(i = 0; i < n; i++)
  {
    if(a[i] > max)
    {
      max = a[i];
    }

    if(a[i] < min)
    {
      min = a[i];
    }
  }

  printf("Maximum element: %d\n", max);
  printf("Minimum element: %d\n", min);

  return 0;
}