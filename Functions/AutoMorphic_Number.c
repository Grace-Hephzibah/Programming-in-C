#include<stdio.h>
#include<math.h>

int AutoMorphic_Number(int n)
{
    int len=1, value;
    for(int temp=n; temp>0; temp = temp/10, len++)
    
    value = pow(10,len);
    
    // printf("\n length %d || last value %d  || value %d \n",len, (n*n)%value, value);
    
    return (   (n == (n*n)%value) ? 1: 0    );
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    (AutoMorphic_Number(num)) ? printf("Yes") : printf("No");
    
    return 0;
}
