// Progrma which accept number from yesr and print that number of $ and * on screen

// Input  : 5
// Outpur : $ * $ * $ * $ * $ *

// Input  : -8
// Outpur : $ * $ * $ * $ * $ * $ * $ *

#include<stdio.h>

void Display(int No)

{
        if(No < 0)
    {
        No = -(No);
    }
    int iCnt = 0;
    for (iCnt = 0; iCnt <= (No); iCnt++)
    {
        printf("$  * ");
    }
    
}


int main()
{
    int iValue = 0;
    printf("Enter a Value : ");
    scanf("%d",&iValue);


    Display(iValue);
    return 0;

}