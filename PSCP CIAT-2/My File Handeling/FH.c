#include<stdio.h>

int main()
{
  FILE *fptr;

  fptr = fopen("Hi.txt","w");

  fputs("C is a fun programming language\nI love using C language",fptr);

  fclose(fptr);

  return 0;
}