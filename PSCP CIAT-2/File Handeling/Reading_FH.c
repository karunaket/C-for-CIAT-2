#include<stdio.h>

int main()
{
  FILE *fptr;

  fptr = fopen("Hi.txt","r");

  char ch[100];

  if(fptr != NULL)  // NULL -> Empty
  {
    while(fgets(ch, 100, fptr))
    {
      printf("%s", ch);
    }
  }
  else
  {
    printf("File open unsuccessful");
  }

  return 0;
}