// Program whic haccept number from user and 
// Count frequency of 2 in it

// Input : 23121
// Output : 2


// Input : 3051
// Output : 0


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
        if(Digit == 2)
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
    
    printf("Frequency of 2 in the number : %d",iRet);
    return 0;

}