// Accept N numbers from user and Display summation of each digit

// Input N : 4
// Input : Elements : 12   15   77   81

// Output : 12 = 3
//          15 = 6
//          77 = 14
//          81 = 9

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int Add(int No)
{
    int iDigit = 0;
    int iSum = 0;
    while(No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No/10; 
    }
    return iSum;
}

void Display(int Arr[],int iSize)
{
    int iCnt = 0;
    int iScan = 0;
    printf("Addition of Digits : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iScan = Add(Arr[iCnt]);
        printf("%d = %d\n",Arr[iCnt],iScan);
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

