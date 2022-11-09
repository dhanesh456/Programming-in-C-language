// Program which accept number from user
// And print all odd numbers upto N

// Input  : 5
// Outpur : 1 3 

// Input  : 10
// Outpur : 1 3 5 7 9


#include<stdio.h>

void Display(int No)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt <=  No; iCnt++)
    {
        if(iCnt %2 != 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter a value : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
