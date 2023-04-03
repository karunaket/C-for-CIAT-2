/* Write a C program to convert a decimal number into a hexadecimal number using user-defined functions. */

#include <stdio.h>

void decimal_to_hexadecimal(int decimal);

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("The hexadecimal representation of %d is: ", decimal);

    decimal_to_hexadecimal(decimal);

    return 0;
}

void decimal_to_hexadecimal(int decimal)
{
    if(decimal == 0)
    {
        return;
    }
    else
    {
        decimal_to_hexadecimal(decimal / 16);
        int remainder = decimal % 16;
        if(remainder < 10)
        {
            printf("%d", remainder);
        }
        else
        {
            printf("%c", remainder - 10 + 'A');
        }
    }
}