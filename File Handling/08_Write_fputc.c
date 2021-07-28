#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char feedback[100];

  fp = fopen("08_test.txt", "w");

  if (fp == NULL) exit(EXIT_FAILURE);

  printf("Provide Feedback on the Product that you recieved from FlipKart : ");
  gets(feedback);
  
  fflush(stdin);

  for(int i=0; feedback[i] > 0; i++) // feedback[i]!=EOF don't try this !!!
  {
    printf("%c   %d >  %d\n",feedback[i],feedback[i],i);
    fputc(feedback[i],fp);
  }

  printf("\nEnd of File : %d", EOF);


  fclose(fp);

  return 0;
}
