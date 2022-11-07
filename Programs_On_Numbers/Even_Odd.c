//Accept number from user and check whether the number
//is even or odd

#include<stdio.h>
#include<stdbool.h>


bool Display(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool bret = false;

    printf("Enter Number to check whether that number is odd or even : ");
    scanf("%d",&iValue);

    bret = Display(iValue);
    if(bret == true)
    {
        printf("%d is an even number :",iValue);

    }
    else
    {
        printf("%d is an odd number :",iValue);
    }


    return 0;
}