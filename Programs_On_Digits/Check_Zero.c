// Program whic haccept number from user and check whether it contains 0 in it or not

// Input : 23121
// Output : There is no Zero


// Input : 23051
// Output : It contains Zero


#include<stdio.h>
#include<stdbool.h>

bool Digit(int Value)
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
        Value = Value/10;
        if(Digit == 0)
        {
            return true; 
            break; 
        }
        
    }
    
}


int main()
{
    int No1 = 0;
    bool bRet = false;

    printf("Enter A number : ");
    scanf("%d",&No1);

    bRet = Digit(No1);
    if(bRet == true)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;

}