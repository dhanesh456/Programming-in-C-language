// Accept number from user and count number of digit
// Input : 312
// Output : 3

// Input : 1233
// Output : 4

#include<stdio.h>


int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo == 0)
    {
        return 1;
    }

    while(iNo != 0)  //Enter only if iNo is not zero
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCnt++;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;

}



/*
iNo = 715

iDigit = iNo % 10           1
iNo = iNo / 10              75

iDigit = iNo % 10           5
iNo = iNo / 10              7

iDigit = iNo % 10           7
iNo = iNo / 10              0




*/