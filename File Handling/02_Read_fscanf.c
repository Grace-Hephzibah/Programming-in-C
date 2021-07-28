#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char name[10], test_name[10];
  int roll_no, test_roll_no;

  fp = fopen("02_Student.txt", "r");

  // Exceptional Handling
  if (fp == NULL) exit(EXIT_FAILURE);

  // Print in the screen
  printf("\nEnter the Name and Roll Number of the Student : ");
  // Read from the Keyboard
  fscanf(stdin, "%s %d", name, &roll_no);
  // Printing the input
  printf("\nName : %s     Roll Number : %d", name, roll_no);

  // Read from the file
  fscanf(fp, "%s %d", test_name, &test_roll_no);
  // Printing the input
  printf("\nName : %s     Roll Number : %d", test_name, test_roll_no);

  fclose(fp);

  return 0;
}

/*
The file .txt and .DAT is empty
But the output is shown

Maybe the file was never written to begin with
The output is shown from the BUFFER

That could also explain the extra output that is shown when the file contents are printed 
*/
