// Accept range from user and Return addition of  all even numbers in between
// Input : 10 18
// Output : 108 

#include<stdio.h>

int Range(int Start ,int End)
{
    int iCnt = 0;
    int iAns = 0;
    if(Start > End)
    {
        printf("Invalid range\n");

    }
    for(iCnt = Start; iCnt <= End; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iAns = iAns+iCnt;
        }
    }
    return iAns;
}

int main()
{
    int No1 = 0, No2 = 0;
    int iRet = 0;

    printf("Enter a start point : ");
    scanf("%d",&No1);
    printf("Enter End point : ");
    scanf("%d",&No2);

    iRet = Range(No1,No2);
    if(iRet > 0)
    {
        printf("Addition of all numbers between range : %d",iRet);
    }
    return 0;

}