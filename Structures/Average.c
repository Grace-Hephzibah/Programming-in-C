// Online C compiler to run C program online
#include <stdio.h>

struct smarks
{
    char sname[20];
    int reg_no, s1,s2,s3,tot;
    float avg;
} sm1[2];

int main() 
{   int student_number = 2;
    printf("Enter in the following format\n Name, Register Number, SubMarks-1, SubMarks-2, SubjMarks-3\n");
    for(int i=0; i<student_number; i++)
    {
        scanf("%s", sm1[i].sname);
        scanf("%d %d %d %d",&sm1[i].reg_no,&sm1[i].s1,&sm1[i].s2,&sm1[i].s3);
        sm1[i].avg = (float) (sm1[i].s1+sm1[i].s2+sm1[i].s3)/3;
    }
    
    printf("\n\n Data \n");
    for (int i=0; i<student_number; i++)
    {
        printf("%s(%d) %d,%d,%d=>%.3f\n",sm1[i].sname,sm1[i].reg_no,sm1[i].s1,sm1[i].s2,sm1[i].s3,sm1[i].avg);
    }
    return 0;
}
