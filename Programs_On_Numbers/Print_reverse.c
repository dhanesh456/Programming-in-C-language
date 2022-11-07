// Accept number from user and print it in reverse


#include<stdio.h> 

void Reverse(int iNo)
{
    int iCnt = 0;
    printf("______________________________________\n");
    for(iCnt = iNo; iCnt > 0 ; iCnt--)
    {
        printf("%d\n",iCnt);
    }
    printf("______________________________________");
}

int main()
{

    int iValue = 0;
    
    printf("Enter a Number  : \n");
    scanf("%d",&iValue);

    Reverse(iValue);

    return 0;
}
