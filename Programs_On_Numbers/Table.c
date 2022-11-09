//Accept number from user and diplay its Table 

#include<stdio.h> 

void Table(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    printf("_____________________________________________\n");
    printf("Table of %d \n",iNo);
    printf("_____________________________________________\n");

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iSum = iNo * iCnt;
        printf("%d * %d = %d\n",iNo,iCnt ,iSum);

    }
    printf("_____________________________________________");
}

int main()
{

    int iValue = 0;
    
    printf("Enter a Number who's table you want to display : \n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
