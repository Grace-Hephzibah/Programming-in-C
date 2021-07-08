#include <stdio.h>

struct student
{
    char name[15];
    char reg_no[15];
    struct dob
    {
        int day,month,year;
    }dob;
};

int main() {
    struct student A;
    printf("Enter the Student name : ");
    scanf("%s", A.name);
    printf("Enter the Student Register No: ");
    scanf("%s", A.reg_no);
    printf("Enter the DOB:\n\tenter the day: ");
    scanf("%d", &A.dob.day);
    printf("\t enter the month: ");
    scanf("%d", &A.dob.month);
    printf("\t enter the year: ");
    scanf("%d", &A.dob.year);
    
    //struct student A={"Phobe", "RA2093026020764", 1,1,2000};
    
    printf("\n\nName:%s \nReg.No:%s \nDOB: %02d:%02d:%04d", A.name, A.reg_no, A.dob.day, A.dob.month, A.dob.year);
    return 0;
}
