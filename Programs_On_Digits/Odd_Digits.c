// Program which accept number from user and 
// Return Count Odd digits in it

// Input : 23121
// Output : 3


// Input : 514654
// Output : 3 


#include<stdio.h>
#include<stdbool.h>

int Digit(int Value)
{
    int iCnt = 0;
    int Digit = 0;
    if(Value < 0 )
    {
        Value = -(Value);
    }
    while (Value != 0)
    {
        Digit = Value % 10;
        if(Digit % 2 != 0)
        {
            iCnt++;

        }
        Value = Value/10;
    }
    return iCnt;
}


int main()
{
    int No1 = 0;
    int iRet = 0;

    printf("Enter A number : ");
    scanf("%d",&No1);

    iRet = Digit(No1);
    
    printf("Count of Odd Digits in the number : %d",iRet);
    return 0;

}