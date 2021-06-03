#include <stdio.h>

int main()
{
   int m, n;

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   int first[m][n], second[m][n], diff[m][n];
   printf("Enter the elements of first matrix\n");

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
       printf("\n");
    }

   printf("Enter the elements of second matrix\n");

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         scanf("%d", &second[i][j]);
      printf("\n");
    }

   printf("Difference of entered matrices:-\n");

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
      {
         diff[i][j] = first[i][j] - second[i][j];
         printf("%d\t", diff[i][j]);
      }
      printf("\n");
   }

   return 0;
}
