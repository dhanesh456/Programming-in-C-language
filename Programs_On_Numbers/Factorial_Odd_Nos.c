#include<stdio.h>


int OddFactorial(int iNo)
{
    int iCnt = 1;
    int iSum = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo ;iCnt = iCnt+2)
    {
        iSum = iCnt * iSum;
        
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    
    printf("Enter a number to find its Odd factorial : ");
    scanf("%d",&iValue1);
    if(-iValue1)
    {
        iValue1 = -iValue1;
    }
    
    iRet = OddFactorial(iValue1);
    printf("Odd factorial = %d",iRet);

    return 0;
}
