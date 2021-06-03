#include <stdio.h>

int main()
{
   int m, n, x, y;

   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);

   printf("Enter the elements of first matrix\n");
   int first[m][n];
   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         scanf("%d", &first[i][j]);

    do {
      printf("Enter the number of rows and columns of matrix\n");
      scanf("%d%d", &x, &y);
    } while(n != x);

   printf("Enter the elements of Second matrix\n");
   int second[x][y];
   for (int i = 0; i < x; i++)
      for (int j = 0; j < y; j++)
         scanf("%d", &second[i][j]);

   printf("Multiplication of the entered matrices:-\n");
   int mul[m][y];
   for (int i = 0; i < m; i++)
      for (int j = 0; j < y; j++)
        mul[i][j] = 0;

   for (int i = 0; i < m; i++)
    for (int j = 0; j < y; j++)
        for(int k = 0; k < x; k++)
          mul[i][j] += first[i][k] * second[k][j];

      for (int i = 0; i < m; i++)
         for (int j = 0; j < y; j++)
         {
          printf("%d \t", mul[i][j]);
         printf("\n");
        }

   return 0;
}
