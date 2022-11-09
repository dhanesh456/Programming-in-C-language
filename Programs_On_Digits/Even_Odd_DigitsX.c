// Accept number from user and Display number of Even digit and Odd digits 

// Input : 8522031
// Output:-
// Number of even Digits are : 4
// Number of Odd Digits are : 3

#include<stdio.h>


void Even_Odd_Digits(int iNo)
{
    int iDigit = 0;
    int iEvenCnt = 0;
    int iOddcnt = 0;
    
    if(iNo == 0)
    {
        iEvenCnt++;
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
        else
        {
            iOddcnt++;
        }
        iNo = iNo / 10;       
    }
    printf("Number of even Digits are : %d\n",iEvenCnt);
    printf("Number of Odd Digits are : %d",iOddcnt);

    
}
int main()
{
    int iValue = 0;
    
    printf("Enter a Number :");
    scanf("%d",&iValue);

    Even_Odd_Digits(iValue);

    return 0;
}