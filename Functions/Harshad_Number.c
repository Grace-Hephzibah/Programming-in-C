#include<stdio.h>

int Harshad_Number(int n)
{
    int sum=n%10;
    for(int temp=n; temp>0; temp = temp/10, sum += temp%10);
    return (   (n%sum==0) ? 1: 0    );
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    (Harshad_Number(num)) ? printf("Yes") : printf("No");
    
    return 0;
}
