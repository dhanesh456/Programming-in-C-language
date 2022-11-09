// Accept number from user and return Minimum digit

// Input : 45624
// Output: 2

// Input : 12345
// Output: 1

#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
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