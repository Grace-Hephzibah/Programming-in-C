#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of Elements : ");
    scanf("%d", &n);
    int arr[n], arr_cpy[n];
    
    printf("\nEnter the Elements : ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    
    printf("\n Copying the Elements ...");    
    for(int i=0; i<n; i++)
        arr_cpy[i] = arr[i];
      
    printf("\nElements in the Copied Array are \n"); 
    for(int i=0; i<n; i++)
        printf("%d\t", arr_cpy[i]);    
    
    return 0;
}
