#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char name[30];
  float salary;

  fp = fopen("06_Details.txt", "w");

  if (fp == NULL) exit(EXIT_FAILURE);

  for(int i=0; i<3; i++)
  {
    printf("Enter your name : ");
    scanf("%s", name);

    fflush(stdin);

    printf("\nEnter your Salary : ");
    scanf("%f", &salary);

    fprintf(fp, " (%d) NAME: [%-10.10s] \t SALARY %5.2f\n",i,name,salary);
  }

  fclose(fp);

  return 0;
}
