//Accept one number and 
//Check wheather it is divisible by 5 or not




#include<stdio.h>
#include<stdbool.h>


bool Check(int iNo)
{
    if((iNo & 5) == 0)
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
    bool bAns = false;

    printf("Enter a value : ");
    scanf("%d",&iValue);

    bAns = Check(iValue);

    if(bAns == true)
    {
        printf("Number divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
    return 0;

}