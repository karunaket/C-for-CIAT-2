#include <stdio.h>
void main()
{
    FILE *ptr;
    ptr = fopen("Wsentence.txt", "w");
    char ch;
    printf("Enter your sentence:");
    scanf("%c",&ch);
    while(ch!=EOF)
    {
        fprintf(ptr,"%c",ch);
        
    }
     printf("%c",ch);
    fclose(ptr);

}