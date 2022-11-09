// Program which accept number from user and
//Display multiplication of factors 
//Input : 12
//Output : 144


#include<stdio.h> 

int SumFactors(int iNo)
{

        
    int iCnt = 1;
    int iSum = 1;
    printf("Multiplication of factors are : \n");


    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {            
            iSum = iSum * iCnt;
        }
    }
    return iSum;
}       

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a number  : ");

    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Multiplication of Factors are : %d",iRet);

    return 0;
}