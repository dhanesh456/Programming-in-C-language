// Program which accept number from user
// Print its number line
// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4

#include<stdio.h>

void Display(int No)
{
    int iCnt = 0;
    for(iCnt = (-No); iCnt <=  No; iCnt++)
    {
        printf("%d " ,iCnt);
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
