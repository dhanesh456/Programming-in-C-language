//Program which accept number from user and 
//return summation of all its non factor
// Input : 12
//Output : 50

#include<stdio.h>

int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }return iSum; 
   
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Value : ");
    scanf("%d",&iValue);
    
    iRet = SumNonFactor(iValue);
    printf("Addition of Non factors : %d",iRet);
    return 0;

}
