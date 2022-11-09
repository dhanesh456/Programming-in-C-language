// Accept number from user and return Max digit

// Input : 45624
// Output: 6

// Input : 12345
// Output: 5

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo/10;
    }
    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = MaxDigit(iValue);

    printf("Largest number is : %d\n",iRet);

    return 0;
}