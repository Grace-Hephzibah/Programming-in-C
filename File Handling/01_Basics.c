#include<stdio.h>
#include <stdlib.h> // Must Include
int main()
{
  // Creating an object to use a file in C
  FILE *fp;

  // Opening a FILE
  fp = fopen("01_test.txt", "r"); // "01_test.txt" -> is the file name. You can also use gets()
  /*
  char filepath[30];
  gets(filepath);
  fp = fopen(filepath, "r");
  */

  /* This is important to check as there might be an error when you open
   a file that does not exist or if the file is empty*/

   //if !(fp) exit(1); // This will exit the code if there is an error.
   // Another way
   if (fp == NULL)
   {
     printf("No! File Opening Failed");
     exit(EXIT_FAILURE);
   }

   else
   {
     printf("Yay! File Opening Success");
   }

  /*
  In line number 9 : the "r" in the fopen represents the MODE in which the file is opened
  r -> read

  w -> write (IF file exist, file contents will be deleted.
              IF file does not exist, file will be created)

  a -> append (IF file does not exist, file will be created)

  rb -> Binary Mode read
  wb -> Binary Mode write
  ab -> Binary Mode append

  r+ -> read and write
        - file must exist
        - read and then write
  w+ -> read and write
        - file will be created if it does not exist
        - truncated if the file exist
  a+ -> read and write
        - file contents will not be erased
        - stream is positioned at the end of the file

  r+b (or) rb+  -> Binary Mode read and write
  w+b (or) wb+  -> Binary Mode read and write
  a+b (or) ab+  -> Binary Mode read and write
  */


  // Closing the file is also important.
  //fcloseall(); // closes all the open files
  fclose(fp); // closes only the particular file in the parameter

  // Buffer is a temporary memory that is between the code and the file
  // It has a specific memory space
  // File <-> Buffer <-> Code

  // To empty the memory
  // fflush(*fp) to flush the buffer corresponding to a particular file
  // fflushall() ro flush all the buffer of all the files

  printf("\n\nYay! Closed the file. Your file is safe !!!");


  return 0;
}
