//prime
//Take input from user, find its factors ,and add them , 
//and check addtion is equal to the given value by the user



#include<stdio.h> 
#include<stdbool.h>


bool CheckPerfect(int iNo)
{
        
    int iCnt = 0;
    int iSum = 0;

    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
        if(iSum == iNo)
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
    printf("Enter a number to check weather the number is prime or not : \n");

    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number \n ",iValue);
    }
    return 0;
}