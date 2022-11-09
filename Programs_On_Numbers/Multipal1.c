// Program which accept number from user
// And print first 5 multipals of that number

#include<stdio.h>

void Display(int No)
{
    int iAns = 1;
    int iCnt = 1;
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        iAns = No * iCnt;
        printf("%d ",iAns);
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
