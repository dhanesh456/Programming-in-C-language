/*

2       4       6       8
1       3       5       7
2       4       6       8
1       3       5       7
    
*/    

#include<stdio.h>


void Display(int iRow , int iCol)
{
    int iCnt1 = 2;
    int iCnt2 = 0;

    for(iCnt1 = 2; iCnt1 <= (iRow+1); iCnt1++)
    {
        for(iCnt2 =1; iCnt2 <=(iCol*2);iCnt2++)
        {
            if((iCnt1 % 2 == 0) && (iCnt2 %2 == 0))
            {
                printf("%d\t",(iCnt2));
            }
            else if ((iCnt1 % 2 != 0) && (iCnt2 % 2 != 0))
            {
                printf("%d\t",(iCnt2));
            }
        
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