// Accept number from user and count number of digit
// Input : 312  (3+1+2)
// Output : 6

// Input : 1233    (1+2+3+3)
// Output : 9

#include<stdio.h>


int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)  //Enter only if iNo is not zero
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Sum of digits are : %d\n",iRet);

    return 0;

}