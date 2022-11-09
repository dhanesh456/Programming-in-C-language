// Factorial of even numbers


#include<stdio.h>


int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <=iNo ;iCnt = iCnt+2)
    {
        
        iSum = iCnt * iSum;

    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    
    printf("Enter a number to find its even factorial : ");
    scanf("%d",&iValue1);

    
    iRet = EvenFactorial(iValue1);
    printf("Even factorial = %d",iRet);

    return 0;
}
