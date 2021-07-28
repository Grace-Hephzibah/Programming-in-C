#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char feedback[100];

  fp = fopen("07_Feedback.txt", "w");

  if (fp == NULL) exit(EXIT_FAILURE);

  printf("Provide Feedback on the Product that you recieved from FlipKart : ");
  gets(feedback);

  fflush(stdin);

  fputs(feedback,fp);

  fclose(fp);

  return 0;
}
