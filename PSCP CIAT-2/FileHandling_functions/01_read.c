#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("read.txt", "r");
    // int ch;
    char ch[10];
    fscanf(ptr,"%s",&ch);
    printf("%s ",ch);
    fclose(ptr);

}