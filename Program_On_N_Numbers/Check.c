// Accept N numbers from user and accept one another number from user as NO
// And check whether NO is present or not


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int Arr[],int iSize , int NO)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if (Arr[iCnt] == NO)
        {
            break;
        }
        
    }
    if(iCnt < iSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int Length = 0;
    int NO = 0;
    bool iRet = false;

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
    if (iRet == true)
    {
        printf("%d is present in the array \n",NO);
    }
    else
    {
        printf("%d is not present in the array \n",NO);
    }
    free(ptr);
    return 0;
}

