#include<stdio.h>


int FactorialDiff(int iNo)
{
    int iCnt = 1;
    int iSum = 1;
    int iSum2 = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo ;iCnt = iCnt+2)
    {
        iSum = iCnt * iSum;
        
    }
    for(iCnt = 2; iCnt <=iNo ;iCnt = iCnt+2)
    {
        iSum2 = iCnt * iSum2;
        
    }
    return (iSum2 - iSum);
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    
    printf("Enter a number to find its  factorial difference : ");
    scanf("%d",&iValue1);
    
    
    iRet = FactorialDiff(iValue1);
    printf("Factorial Diffenrence = %d",iRet);

    return 0;
}
