/* Write a C program to find the smallest of three numbers using functions. */


#include<stdio.h>
void main()
{
  int a,b,c, small;

  printf("Enter Three Number\n");
  scanf("%d %d %d",&a,&b,&c);

  if(a<b)
  {
      if(a<c)
        small = a;
      else
        small = c;
  }
  else
  {
      if(b<c)
        small = b;
      else
        small = c;
  }

    printf("Smallest Number is : %d",small);

}