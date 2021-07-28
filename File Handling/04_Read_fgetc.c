#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char str[80];

  int i = 0, ch;

  fp = fopen("04_check.txt", "r");

  if (fp == NULL) exit(EXIT_FAILURE);

  do
  {
    ch = fgetc(fp); // reads character by character
    str[i] = (char)ch;
    i++;
  }  while (feof(fp) == 0); //feof() checks and send the EOF value as 0

  str[i] = '\0';

  printf("\n %s", str);

  fclose(fp);

  return 0;
}
