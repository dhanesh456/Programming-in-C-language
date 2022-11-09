//Program which accept number from user and 
//display its factors in decreasing order
//Input : 12
//Output : 6 4 3 2 1

#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d in decending order : \n",iNo);

    for(iCnt = iNo/2 ; iCnt>0 ; iCnt--)
    {    
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    
    printf("Enter a number  : ");

    scanf("%d",&iValue);

    Factors(iValue);

    return 0;
}


