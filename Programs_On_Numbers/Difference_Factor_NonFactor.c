//Program which accept number from user and return
//Difference between  summation of all its factor and non factor

//Input : 12
//Output : -34    (16 - 50)

#include<stdio.h>

int NonFactorsX(int iNo)
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

int Factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }return iSum;
}
int Difference(int iNo1 , int iNo2)
{
    int iAns = iNo1 - iNo2;
    return iAns;
}



int main()
{
    int iRet1 = 0;
    int iRet2 = 0;
    int iValue = 0;
    int iAns = 0;
    printf("Enter a value : ");
    scanf("%d",&iValue);

    iRet2 = NonFactorsX(iValue);
    printf("Addition of Non Factors :  %d\n",iRet2);

    
    iRet1 = Factors(iValue);
    printf("Addition of Factors : %d\n",iRet1);

    

    iAns = Difference(iRet1,iRet2);
    printf("Summation of Factor and Non Factors : %d\n ",iAns);



    return 0;

}