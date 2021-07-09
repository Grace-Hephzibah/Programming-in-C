// Online C compiler to run C program online
#include <stdio.h>

struct emp
{
    char ename[20];
    int eid, esal, eyrs;
} x[100];

int main() 
{   int employee_number;
    printf("Enter the no of employees"); scanf("%d", &employee_number);
    
    printf("\nEnter in the following format\nEmployer Name, ID, Salary, Years of Work\n");
    for(int i=0; i<employee_number; i++)
        scanf("%s %d %d %d", x[i].ename, &x[i].eid,&x[i].esal,&x[i].eyrs);
    
    printf("\n\n Data \n");
    for (int i=0; i<employee_number; i++)
        printf("\n%s(%d) earns %d rupees and has a work service of %d.",x[i].ename,x[i].eid,x[i].esal,x[i].eyrs);
    return 0;
}
