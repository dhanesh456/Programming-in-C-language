//Program which accept number from user and print even factors 
//of that number

//Input : 24
//Output : 2,4,6,8,12

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 2; iCnt <= iNo/2; iCnt = iCnt+2)
    {
        if(iCnt % iNo == 0);
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}