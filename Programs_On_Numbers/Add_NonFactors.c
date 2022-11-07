//Accept number from user and diplay Nonfactor of that number 

#include<stdio.h> 

int Factor(int iNo)
{
    int iAns = 0;
    int iSum = 0;

    for(iAns = 1; iAns < iNo; iAns++)
    {
        if((iNo % iAns) != 0)
        {
            iSum = iSum + iAns;
        }
    }

    return iSum;

}

int main()
{

    int iValue = 0;
    int iRet = 0; 

    printf("Enter a value : \n");
    scanf("%d",&iValue);

    iRet = Factor(iValue);
    printf("Addition of non factor are %d\n",iRet);
    return 0;
}
