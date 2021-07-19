#include<stdio.h>

int perfectNumber(int n)
{
    int sum=0;
    for (int i=1; i<n; i++)
    {
        if (n%i==0) sum += i;
    }
    return ((sum == n)? 1 : 0) ;
}

int main()
{
    int number;
    
    printf("Enter a number :");
    scanf("%d", &number);
    
    (perfectNumber(number)) ? printf("Yes") : printf("No");
    return 0;
}
