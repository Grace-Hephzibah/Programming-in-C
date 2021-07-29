#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  FILE *fp;
  char feedback[100];

  fp = fopen("13_Feedback.txt", "w+");

  if (fp == NULL) exit(EXIT_FAILURE);

  printf("Provide Feedback on the Product that you recieved from FlipKart : ");
  gets(feedback);

  int i=0;
  while(feedback[i] != '\0')
  {
    fputc(feedback[i], fp);
    i++;
  }

  rewind(fp);

  printf("\n Contents of the file are : ");
  while(feof(fp) == 0)
    printf("%c", fgetc(fp));

  fclose(fp);

  return 0;
}

/*
However, you must prefer to use fseek() equivalent code rather calling rewind()
because it is impossible to determine if rewind() was successful or not.
*/
