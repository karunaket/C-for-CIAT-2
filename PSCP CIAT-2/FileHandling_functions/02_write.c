#include<stdio.h>
void main()
{
   FILE *fp;
   char str[150];
   fp=fopen("write.txt","w");
   printf("Enter your string:");
   scanf("%s",&str);
   fprintf(fp," %s",&str);
   printf("%s",str);
   fclose(fp);

}