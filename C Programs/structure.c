/* Write a C program to create a structure called employee containing name, emp-id, basic pay, HRA, and DA. Get inputs and display the same along with total pay. */

#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int emp_id;
    float basic_pay;
    float HRA;
    float DA;
};

int main() {
    struct employee emp;
    float total_pay;

    printf("Enter name: ");
    scanf("%s", emp.name);
    printf("Enter emp-id: ");
    scanf("%d", &emp.emp_id);
    printf("Enter basic pay: ");
    scanf("%f", &emp.basic_pay);
    printf("Enter HRA: ");
    scanf("%f", &emp.HRA);
    printf("Enter DA: ");
    scanf("%f", &emp.DA);

    total_pay = emp.basic_pay + emp.HRA + emp.DA;

    printf("Name: %s\n", emp.name);
    printf("Emp-id: %d\n", emp.emp_id);
    printf("Basic pay: %.2f\n", emp.basic_pay);
    printf("HRA: %.2f\n", emp.HRA);
    printf("DA: %.2f\n", emp.DA);
    printf("Total pay: %.2f\n", total_pay);

    return 0;
}
