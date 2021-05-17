#include<stdio.h>

int main()
{
  int a, sum = 0;

  printf("Enter a number : \n");
  scanf("%d", &a);
  int t = a;

  while (t>0)
  {
    sum += t%10;
    t /= 10;
  }

  printf("The sum of all the numbers in %d is %d", a,sum);

  return 0;
}
