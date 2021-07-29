#include<stdio.h>
#include<stdlib.h>

// How to delete a file
/*
int main()
{
  int success = remove("15_temp.txt");
  // For error to throw use the below statement
  //int success = remove("16_temp.txt");

  if (success != 0) perror("Error Occurred while removing the file !!!") ;

  return 0;
}
*/

// How to rename a file
/*
int main()
{
  int sucess = rename("15_rename_comments.txt", "15_renamed_feedback.txt");

  // For error to throw use the below statement
  int sucess = rename("16_rename_comments.txt", "15_renamed_feedback.txt");

  if (sucess != 0) perror("File could not be renamed !!!");

  return 0;
}
*/

// How to create a temporary file
/*
int main()
{
  FILE *tp = tmpfile();
}
*/
