#include <stdio.h>

// function declaration
int sum(int, int);

// Function
int sum(int x, int y)
{
    int sum;
    sum = x+y;
    return sum;
}

int main() 
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    
    c = sum(a, b);
    printf("The sum is %d", c);
    
    return 0;
}
