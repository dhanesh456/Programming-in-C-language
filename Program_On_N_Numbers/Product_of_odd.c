// Accept N numbers from use are return product of all odd numbers.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Odd(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSum = 1;
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = Arr[iCnt] * iSum;
        }
    }
    if(iSum > 1)
    {
        return iSum;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int Length = 0;
    int iRet = 0;
    printf("Enter the number of elements you want to store in the array : ");
    scanf("%d",&Length);

    ptr = (int *)malloc(Length * sizeof(int));
    printf("Enter values of element : \n");
    for(iValue = 0; iValue < Length; iValue++)
    {
        scanf("%d",&ptr[iValue]);
    }

    iRet = Odd(ptr,Length);
    if(iRet > 1)
    {
        printf("Product of all odd elements are : %d",iRet);
    }
    else
    {}
    free(ptr);
    return 0;
}

