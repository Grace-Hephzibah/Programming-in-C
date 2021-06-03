#include <stdio.h>

int main()
{
   int m, n;

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   int first[m][n];
   printf("Enter the elements of first matrix\n");

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
    printf("\n");
    }

    printf("The given Matrix is : \n");
    printf("~~~~~~~~~~~~~~~~~~~\n \n");

    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
          printf("%d\t", first[i][j]);
       printf("\n\n");
    }

   printf("Transpose Matrix:-\n");
   printf("~~~~~~~~~~~~~~\n \n");

   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < n; j++)
         printf("%d\t", first[j][i]);
      printf("\n\n");
   }

   return 0;
}
