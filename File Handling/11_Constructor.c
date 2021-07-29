#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct employee
{
  int emp_code, hra, da, ta;
  char name[20];
};


int main()
{
  FILE *fp;

  struct employee e[5];

  fp = fopen("11_Employee.txt", "wb");

  if (fp == NULL) exit(EXIT_FAILURE);

  printf("\n Enter the details : ");

  for(int i = 0; i<5; i++)
  {
      scanf("%d %s %d %d %d", &e[i].emp_code, e[i].name, &e[i].hra, &e[i].da, &e[i].ta);

      fwrite(&e[i], sizeof(e[i]),1,fp);
  }

  fclose(fp);

  getch();

  return 0;

}
