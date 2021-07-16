#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int size;
    printf("Enter the Size : ");
    scanf("%d", &size);
    char *str =  (char *) malloc(size * sizeof(char));
    int index; char value;
    
    printf("\nEnter a String of Size : ");
    scanf("%s", str);
    
    int choice = 1;
    while(choice)
    {
        printf("Enter a index and a value\n");
        scanf("%d %c", &index, &value);
        
        if (index > size) printf("Wrong Index");
        else str[index] = value;
        
        printf("\nThe new String : %s\nEnter your choice : 1/0  ", str);
        scanf("%d", &choice);
    }
    
    return 0;
}
