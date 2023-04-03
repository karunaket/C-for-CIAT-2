/* Write a c program to display even and odd numbers separately between 50 and 100. */

#include <stdio.h>

int main() {
  int i;

  printf("Even numbers between 50 and 100: ");
  for (i = 50; i <= 100; i++) {
    if (i % 2 == 0) {
      printf("%d ", i);
    }
  }

  printf("\nOdd numbers between 50 and 100: ");
  for (i = 50; i <= 100; i++) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
  }

  return 0;
}