

#include<stdio.h>


void ReverseTable(int iNo)
{
    int iCnt = 1;
    int iAns = 1;
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iAns = iNo * iCnt;
        printf("%d \n",iAns);
    }
}
    
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter a value : ");
    scanf("%d",&iValue);

    
    ReverseTable(iValue);
    
    return 0;

}