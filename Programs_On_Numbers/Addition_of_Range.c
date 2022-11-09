// Accept range from user and Return Addition of all numbers in between that range

// Input : 23 30 
// Output : 212

#include<stdio.h>

int Range(int Start ,int End)
{
    int iCnt = 0;
    int iSum = 0;
    if(Start > End)
    {
        printf("Invalid range\n");

    }
    for(iCnt = Start; iCnt <= End; iCnt++)
    {
      iSum = iCnt+iSum;
    }
    return iSum;
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