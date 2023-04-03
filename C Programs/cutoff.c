/* Develop a C program to calculate the medical and engineering cut-off marks for a student. */

#include <stdio.h>

int main()
{
  int physics, maths, chemistry, biology;

  float eng_cutoff, med_cutoff;

  printf("Enter the marks for physics:");
  scanf("%d", &physics);

  printf("Enter the marks for maths:");
  scanf("%d", &maths);

  printf("Enter the marks for chemistry:");
  scanf("%d", &chemistry);

  printf("Enter the marks for biology:");
  scanf("%d", &biology);

  eng_cutoff = (physics + maths + chemistry)/3;
  med_cutoff = (biology + maths + chemistry)/3;

  printf("The Engineering cutoff mark = %f\n", eng_cutoff);
  printf("The Medical cutoff mark = %f", med_cutoff);
  
  return 0;
}