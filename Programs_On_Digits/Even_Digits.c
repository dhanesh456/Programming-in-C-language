// Accept number from user and count number of Even digit
// Input : 3129
// Output : 1

// Input : 123368
// Output : 3

#include<stdio.h>


int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    
    if(iNo == 0)
    {
        return 1;
    }
    if(iNo < 0)     //To convert number from negative to possitvive    
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)  
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iEvenCnt++;
        }
        iNo = iNo / 10;       
    }
    return iEvenCnt;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of Even digits are  : %d\n",iRet);

    return 0;
}