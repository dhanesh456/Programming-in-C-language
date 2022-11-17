// Accept N numbers from user and accept one another number from user as NO
// And return index of last occurrence of that NO.


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int Check(int Arr[],int iSize , int NO)
{
    int iCnt = 0;
    int iPos = -1;
    for(iCnt = iSize-1 ; iCnt >= 0; iCnt--)
    {
        if (Arr[iCnt] == NO)
        {
            break;

        }
        
    }
    return iCnt;
}

int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int Length = 0;
    int NO = 0;
    int iRet = 0;

    printf("Enter the number of elements you want to store in the array : ");
    scanf("%d",&Length);

    ptr = (int *)malloc(Length * sizeof(int));
    printf("Enter values of element : \n");
    for(iValue = 0; iValue < Length; iValue++)
    {
        scanf("%d",&ptr[iValue]);
    }
    printf("Enter a number to check if it is present in the array : ");
    scanf("%d",&NO);

    iRet = Check(ptr,Length,NO);
    if(iRet == -1)
    {
        printf("%d is not present in the array",NO);
    }
    else
    {
        printf("First occurrence of %d is at : index %d ",NO,iRet);
    }
    free(ptr);
    return 0;
}

