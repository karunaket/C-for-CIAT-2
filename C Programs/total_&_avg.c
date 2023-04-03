/* Get roll number, name, gender, age, and marks of a student. Calculate the total and average of the students. */

#include <stdio.h>

int main()
{
    int roll_num, age, marks[5], total = 0;
    float avg;
    char name[20], gender;

    printf("Enter roll number: ");
    scanf("%d", &roll_num);

    printf("Enter name: ");
    scanf("%s", name);

    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks of 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    avg = total / 5.0;

    printf("\nRoll Number: %d\n", roll_num);
    printf("Name: %s\n", name);
    printf("Gender: %c\n", gender);
    printf("Age: %d\n", age);
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", avg);

    return 0;
}