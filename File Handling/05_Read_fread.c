#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char str[11];

  fp = fopen("05_Letter.txt", "r+");

  if (fp == NULL) exit(EXIT_FAILURE);

  fread(str, 1, 10, fp);

  /* In the str 10 objects of 1 byte are read from the file pointed by fp */

  str[10] = '\0';

  printf("First 9 characters of the file are: %s", str);

  fclose(fp);
}
