// Accept number from user and check if it is a pallindrome number or not

// Input : 121
// Output: 121 is a pallindrome number

// Input : 12345
// Output: 12345 is not a pallindrome number

#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev =0;
    int iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    if(iRev == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    if (bRet == true)
    {
        printf("%d is pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number\n",iValue);
    }
    

    return 0;
}