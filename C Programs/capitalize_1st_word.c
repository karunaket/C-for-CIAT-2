/* Write a C program to capitalize the first word of each sentence using built-in functions. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char sentence[1000];
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for(i = 0; sentence[i] != '\0'; i++)
    {
        if(i == 0 || sentence[i - 1] == '.' || sentence[i - 1] == '?' || sentence[i - 1] == '!')
        {
            sentence[i] = toupper(sentence[i]);
        }
    }

    printf("Capitalized sentence: %s\n", sentence);

    return 0;
}