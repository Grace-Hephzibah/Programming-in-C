#include <stdio.h>

int main() 
{
    int n, rev = 0, r;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    int t = n;
    
    while (t != 0) 
    {
        r = t % 10;
        rev = rev * 10 + r;
        t /= 10;
    }
    printf("Reversed number of %d is %d", n, rev);
    return 0;
}
