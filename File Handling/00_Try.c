#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;

  fp = fopen("02_Student.txt", "r");

  if (fp == NULL) exit(EXIT_FAILURE);

  printf("%d", sizeof(fp));

  return 0;
}
