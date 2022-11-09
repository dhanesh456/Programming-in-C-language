// Program which accept number from user and 
// Return Multiplication of all digits

// Input : 2395
// Output : 270


// Input : 9440
// Output : 144


#include<stdio.h>
#include<stdbool.h>

int Digit(int Value)
{
    int iCnt = 1;
    int Digit = 1;
    if(Value < 0 )
    {
        Value = -(Value);
    }
    while (Value != 0)
    {
        Digit = Value % 10;
        if(Digit == 0)
        {
            Digit = 1;
        }
        iCnt = iCnt*Digit;
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
    
    printf("Multiplication of all Digits : %d",iRet);
    return 0;

}