// Program which accept number from user and 
// Return Difference between summation of even digits and summation of odd digits

// Input : 2395
// Output : -15  (2-17)


// Input : 8440
// Output : 16 (16 - 0)


#include<stdio.h>
#include<stdbool.h>

int Digit(int Value)
{
    int iEven = 0, iOdd = 0;
    int Digit = 1;
    if(Value < 0 )
    {
        Value = -(Value);
    }
    while (Value != 0)
    {
        Digit = Value % 10;
        if(Digit %2 == 0)
        {
            iEven = iEven + Digit;
        }
        else
        {
            iOdd = iOdd + Digit;
        }
        
        Value = Value/10;
    }
    return (iEven - iOdd);
}


int main()
{
    int No1 = 0;
    int iRet = 0;

    printf("Enter A number : ");
    scanf("%d",&No1);

    iRet = Digit(No1);
    
    printf("Difference between even and odd digits is  : %d",iRet);
    return 0;

}