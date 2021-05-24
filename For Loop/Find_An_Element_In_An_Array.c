#include<stdio.h>

int main()
{
    int n, test_val;
    int test = 0;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i<n; i++)
    {
        printf("Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter the search value in the array : ");
    scanf("%d", &test_val);
    
    for(int i = 0; i<n; i++)
    {
        if (arr[i] == test_val)
        {
            printf("\n The value %d exists at position %d ", arr[i], i);
            test = 1;
            break;
        }
    }
    
    if (test == 0)
        printf("\n The value does not exist");   
    
    return 0;
}
