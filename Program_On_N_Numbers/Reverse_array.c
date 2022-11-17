// Accept N numbers from user and return Maximum number


#include<stdio.h>
#include<stdlib.h>


void Reverse(int Arr[],int iSize)
{
    int iCnt = 0;
    
    for(iCnt = iSize-1; iCnt >= 0 ; iCnt--)
    {
        printf("%d\t",Arr[iCnt]);
    }
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

    Reverse(ptr,Length);

    free(ptr);
}