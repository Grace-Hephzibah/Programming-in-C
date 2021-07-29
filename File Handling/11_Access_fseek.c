#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct
{
  int emp_code, hra, da, ta;
  char name[20];
}emp;


int main()
{
  FILE *fp;
  emp e;

  int result, rec_no;

  fp = fopen("11_Employee.txt", "rb");

  if (fp == NULL) exit(EXIT_FAILURE);

  printf("\n\n Enter the rec_no you want to read : ");
  scanf("%d", &rec_no);

  if (rec_no>=0)
  {
    /* From the file pointed by the fp read a record of the specified record starting from the beginning of the file */
    fseek(fp, (rec_no - 1)*sizeof(e), SEEK_SET);
    result = fread(&e, sizeof(e), 1, fp);

    if (result == 1)
    {
      printf("\n EMPLOYEE CODE :  %d", e.emp_code);
      printf("\n Name: %s", e.name);
      printf("\n HRA, TA and DA : %d %d %d", e.hra, e.ta, e.da);
    }

    else
      printf("Record Not Found");
  }

  fclose(fp);

  getch();

  return 0;

}

/*
- fseek(fp, 0l, SEEK_SET) ---> move to the beginning of the file
- fseek(fp, 0l, SEEK_CUR) ---> stay at the current position
- fseek(fp, 0l, SEEK_END) ---> go the end of the file
- fseek(fp, m, SEEK_CUR)  ---> move forward by m bytes in the file from the current location
- fseek(fp, -m, SEEK_CUR) ---> move backwards by m bytes in the file from the current location
- fseek(fp, -m, SEEK_END) ---> move backwards by m bytes from the end of the file
*/


/*
Not sure of how to give the format of the file for this code to run :(
emp_code = 00 name = AAA hra = 1000 da = 10400 ta = 10100
emp_code = 01 name = AXX hra = 71000 da = 10200 ta = 10200
emp_code = 02 name = AYY hra = 18000 da = 10080 ta = 10030
*/
