/* Write a C Program to find the sum of odd numbers in an array. */

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }
    printf("The sum of odd numbers in the array is %d", sum);
    return 0;
}
