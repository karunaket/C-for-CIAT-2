/* Develop a C program to read the names and marks of n number of students and store them in a file. */

#include <stdio.h>

int main() {
    int n, i;
    char name[50];
    int marks;
    FILE *fp;

    fp = fopen("students.txt", "w");

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter the name of student %d: ", i+1);
        scanf("%s", name);
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks);
        fprintf(fp, "%s %d\n", name, marks);
    }

    fclose(fp);

    printf("\nData saved successfully in file!");

    return 0;
}
