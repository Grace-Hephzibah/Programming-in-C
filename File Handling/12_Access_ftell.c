#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
  FILE *fp;

  int n; char c;

  // Opening the file in write mode
  fp =  fopen("12_abc.txt", "w");

  if (fp == NULL) exit(EXIT_FAILURE);

  while((c = getchar()) != '\n' )
    putc(c,fp);

  n = ftell(fp);

  fclose(fp);

  // Opening the file in read mode
  fp = fopen("12_abc.txt", "r");

  if (fp == NULL) exit(EXIT_FAILURE);

  while(ftell(fp) < n)
  {
    c = fgetc(fp);
    printf("%c", c);
  }

  fclose(fp);

  return 0;
}
