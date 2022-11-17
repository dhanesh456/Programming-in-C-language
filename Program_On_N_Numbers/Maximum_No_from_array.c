// Accept N numbers from user and return Maximum number


#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{

    int *ptr = NULL;
    int Length = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter length of array : ");
    scanf("%d",&Length);
    if(Length < 0)
    {
        printf("Invalid Input \nEnter a positive number\n");
       
    }

    ptr = (int *)malloc(sizeof(int) * Length);

    printf("Enter the elements : \n");
    for(i = 0; i < Length; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr,Length);
    printf("Maximum number from array is : %d",iRet);

    free(ptr);
}