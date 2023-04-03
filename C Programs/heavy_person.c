/* Develop a C program to find the heavy person whose weight is the sum of the previous two persons. */

#include <stdio.h>

int main()
{
    int n, i, person1, person2, sum = 0, heavy_person = 0;

    printf("Enter the weight of the first person: ");
    scanf("%d", &person1);

    printf("Enter the weight of the second person: ");
    scanf("%d", &person2);

    printf("Enter the number of persons: ");
    scanf("%d", &n);

    for(i = 3; i <= n; i++)
    {
        sum = person1 + person2;
        person1 = person2;
        person2 = sum;

        if(sum > heavy_person)
        {
            heavy_person = sum;
        }
    }

    printf("The weight of the heaviest person whose weight is the sum of the previous two persons is %d.\n", heavy_person);

    return 0;
}