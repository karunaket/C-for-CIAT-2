#include<stdio.h>

int main()
{
  FILE *fptr;

  fptr = fopen("Hi.txt","r");

  char ch;

  int lines = 0;

  while((ch = fgetc(fptr)) != EOF)
  {
    if(ch == '\n')
    {
      lines++;
    }
  }

  printf("Total no. of lines : %d", lines);

  fclose(fptr);

  return 0;
}