// Program whic haccept number from user and 
// Count frequency less then 6 in it

// Input : 23121
// Output : 0


// Input : 30514654
// Output : 2


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
        if(Digit < 6)
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
    
    printf("Frequency of Digits less then 6 in the number : %d",iRet);
    return 0;

}