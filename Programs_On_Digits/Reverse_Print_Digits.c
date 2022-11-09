//Accept number from user and Display its Digits in reverse order

// Input : 2395
// Output : 5 ,9 ,3 ,2

#include<stdio.h>

void Digit(int Value)
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
        printf("%d\n",Digit);
        Value = Value/10;
    }
    
}


int main()
{
    int No1 = 0;

    printf("Enter A number : ");
    scanf("%d",&No1);

    Digit(No1);
    return 0;

}