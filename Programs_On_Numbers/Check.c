// Program which accept one number from user and
// Check whether that number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool check(int No)
{
    if (No > 100)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
}


int main()
{
    int Value = 0;
    bool iRet = false;
    printf("Enter a number : ");
    scanf("%d",&Value);

    iRet = check(Value);
    if (iRet == false)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    
    


}