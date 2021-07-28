#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
  FILE *fp;
  char feedback[100];

  //fp = fopen("10_Comments.txt", "w");

  // Try 1
  //fp = fopen("10_Try_Comments.txt", "w"); // To see what the if statement does
  // Apparently, it created a new file !!!

  // Try 2
  // I dont open any file. Then the file must be pointing to NULL (I assume)
  // Apparently, it did not show any error. IDK Why. It wasn't pointing to NULL. That is the possible reason I could think of

  // Try 3
  // Make the variable point to NULL. Explicit statement
  fp = NULL;
  // Apparently, it WORKED !!!
  // Output:
  /*
  OOPS ERROR !: No error

 Error Number = 0
 */

  if (fp == NULL)
  {
    perror("OOPS ERROR !");
    printf("\n Error Number = %d", errno);
    exit(EXIT_FAILURE);
  }

  printf("\nGive the feedback for the book that you received from Flipkart : \n");
  gets(feedback);

  for(int i=0; feedback[i] > 0; i++)
  {
    fputc(feedback[i], fp);

    if (ferror(fp))
    {
      clearerr(fp);
      break;
      /* Clears the error indicators and jump out of for loop */
    }
  }

  fclose(fp);

  return 0;

}
