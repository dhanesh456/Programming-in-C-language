// Program which accept total marks and
// Obtained marks from user and calculat percentage.


#include<stdio.h>

float Percentage(int TMarks,float MarksO)

{
    
    float Per = 0.0;
    Per = (MarksO/TMarks) * 100;
    
    return Per;
}

int main()
{
    int Total_Marks = 0;
    int Marks_Obtained = 0;
    float iRet = 0.0;
    printf("Enter total marks : ");
    scanf("%d",&Total_Marks);

    printf("Enter Marks obtained : ");
    scanf("%d",&Marks_Obtained);

    iRet =  Percentage(Total_Marks,Marks_Obtained);
    printf("Percentage =  %.2f%%",iRet);
    return 0;
}