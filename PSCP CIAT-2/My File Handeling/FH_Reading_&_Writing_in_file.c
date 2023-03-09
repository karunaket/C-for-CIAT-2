#include <stdio.h>

int main()
{
  FILE *test;

  test = fopen("pscp.txt","r");

  char content[100];

  if(test != NULL)
  {
            /*To read the first sentence at a time*/

                // fgets(content, 100, test);


    //--> reads the content of the file and stores it in the content array

                // printf("%s\n\n",content);

    //-->fgets can only read the first sentence at a time


                /*To read all the sentence*/


                  while(fgets(content, 100, test))
                  {
                    printf("%s",content);
                  }
  }
  else
  {
    printf("File open Unsuccessful");
  }
  
  return 0;
}