#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("\nNumber of characters in the string: %d\n", count);

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase string: %s\n", str);

    return 0;
}
