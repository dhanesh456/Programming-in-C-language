/*
1       2       3       4
5       6       7       8
9       10      11      12
13      14      15      16




*/        

#include<stdio.h>


void Display(int iRow , int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
    int X = 1;
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            printf("%d\t",X++);
        }
        printf("\n");
        
    }
    


}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);
    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0;
}