// Program which accept number from user and display below number

// Input : 5
// Output : * * * * * # # # # #

#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 1;
    for(iCnt = 1;iCnt <=(iNo*2);iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
    }
    
}
    

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a value : ");
    scanf("%d",&iValue);

    
    Display(iValue);
    
    return 0;

}