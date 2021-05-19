#include<stdio.h>
 int main()
{

int num, a, b, x, sum;
printf("Enter the first number = ");
scanf("%d",&a);
printf("Enter the last number = ");
scanf("%d",&b);

for (int i = a; i<=b; i++)
{
  num = i;
  sum = 0;
  while(num>0)
  {
    x = num%10;
    sum += (x*x*x);
    num /= 10;
  }
  if(i == sum)
    printf("%d \n", i);
}
return 0;
}
