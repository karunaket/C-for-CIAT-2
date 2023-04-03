/* Write a C program to convert a decimal number into an octal number using user-defined functions. */

#include <stdio.h>

void decimal_to_octal(int decimal);

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("The octal representation of %d is: ", decimal);

    decimal_to_octal(decimal);

    return 0;
}

void decimal_to_octal(int decimal)
{
    if(decimal == 0)
    {
        return;
    }
    else
    {
        decimal_to_octal(decimal / 8);
        printf("%d", decimal % 8);
    }
}