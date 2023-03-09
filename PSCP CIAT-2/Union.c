// Define a union called "my_union"


#include <stdio.h>

union my_union {
    int i;
    float f;
    char c;
};

int main() {
    // Declare a variable of type "my_union"
    union my_union my_variable;

    // Assign values to the union members
    my_variable.i = 42;
    my_variable.f = 3.14;
    my_variable.c = 'A';

    // Print the values of the union members
    printf("Integer value: %d\n", my_variable.i);
    printf("Float value: %f\n", my_variable.f);
    printf("Character value: %c\n", my_variable.c);

    return 0;
}
