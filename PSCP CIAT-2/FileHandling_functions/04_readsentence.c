#include<stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("Rsentence.txt", "r");
   char ch;
   ch = fgetc(ptr);
   while (ch!=EOF)
   {
    printf("%c",ch);
    ch=fgetc(ptr);
   }
   printf("\n");
    fclose(ptr);

}