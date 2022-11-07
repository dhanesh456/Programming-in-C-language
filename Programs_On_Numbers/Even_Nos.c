//program which accept one number from user and 
//print that number of even number on screen

//Input : 7
//Output : 2 4 6 8 10 12 14

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        printf("Invalid input\nPlease enter positive number ");
    }
    for(iCnt = 2; iCnt <= (iNo*2); iCnt = iCnt+2)
    {
        printf("%d\n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);
    return 0;
}