/* Write a C program to convert a decimal number into a binary number using user-defined functions. */

#include <stdio.h>

void decimal_to_binary(int decimal);

int main()
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    printf("The binary representation of %d is: ", decimal);

    decimal_to_binary(decimal);

    return 0;
}

void decimal_to_binary(int decimal)
{
    if(decimal == 0)
    {
        return;
    }
    else
    {
        decimal_to_binary(decimal / 2);
        printf("%d", decimal % 2);  
    }
}
