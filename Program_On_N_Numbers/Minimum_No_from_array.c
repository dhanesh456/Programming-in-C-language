// Accept N numbers from user and return Minimum number


#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(ptr,Length);
    printf("Minimum number from array is : %d",iRet);

    free(ptr);
}