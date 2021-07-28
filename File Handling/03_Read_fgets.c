#include<stdio.h>
#include<stdlib.h>

int x = 80 ;// Size used everywhere in this program

int main()
{
  FILE *fp;

  char str[x];

  fp = fopen("03_ABC.DAT", "r");

  if (fp == NULL) exit(EXIT_FAILURE);

  while(fgets(str, x, fp) != NULL)
    printf("\n %s", str);

  printf("\n\nFile Read");

  fclose(fp);

  return 0;
}
