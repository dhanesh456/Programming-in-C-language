// Display 3 digit numbers from an array

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    printf("3 Digit number from array are :\n");
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] > 99) && (Arr[iCnt] <= 999))
        {
            printf("%d\n",Arr[iCnt]);
        }
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

    Display(ptr,Length);
    
    free(ptr);
    return 0;
}

