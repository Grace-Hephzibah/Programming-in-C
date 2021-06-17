#include<stdio.h>

void swap(int *, int*);

void swap(int *x, int*y)
{
int z = *x;
*x = *y;
*y = z;
 printf("The swapped values are %d and %d", *x, *y);
}

int main()
{
int x = 3, y = 2;
swap(&x,&y);
 printf("\n The swapped values are %d and %d", x, y);
return 0;
}
