#include <stdio.h>

int main()
{
  FILE *test;

  test = fopen("pscp.txt","w");

  fclose(test);
  
  return 0;
}