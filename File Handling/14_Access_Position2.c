#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  fpos_t pos;
  char text[20];

  fp = fopen("14_Practice.txt", "rb");

  if (fp == NULL)
  {
    perror("\n File is NULL");
    exit(EXIT_FAILURE);
  }
  fread(text, sizeof(char), 20, fp);

  if (fgetpos(fp, &pos) != 0)
  {
    perror("\n fgetpos error");
    exit(EXIT_FAILURE);
  }

  fread(text, sizeof(char), 20, fp);

  printf("\n 20 bytes at byte %ld %s", pos, text);

  pos = 90;

  if (fsetpos(fp, &pos) != 0)
  {
    perror("\n fsetpos error");
    exit(EXIT_FAILURE);
  }

  fread(text, sizeof(char), 20, fp);
  printf("\n 20 bytes at byte %ld %s", pos, text);

  return 0;

}
/*
What is fpos_t ? // Thanks to cppreference
fpos_t is a non-array complete object type, can be used to store (by fgetpos) and restore (by fsetpos)
the position and multibyte parser state (if any) for a C stream.

The multibyte parser state of a wide-oriented C stream is represented by a mbstate_t object, whose value
is stored as part of the value of a fpos_t object by fgetpos.
*/
