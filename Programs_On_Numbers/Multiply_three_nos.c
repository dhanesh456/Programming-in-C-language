// Program which accept two numbers and 
// check whether numbers are equal or not

#include<stdio.h>


int Multiply(int iNo1, int iNo2, int iNo3)
{
    if(iNo1   == 0)
    {
        iNo1  =  1;
    }
    if(iNo2  == 0)
    {
        iNo2 =  1;
    }
    if(iNo3  == 0)
    {
        iNo3 =  1;
    }
    int iAns = iNo1 * iNo2 * iNo3;
    return iAns;
}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;
    
    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    printf("Enter third number : ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is : %d",iRet);

    return 0;
}