//Display even Numbers from Array



#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the opperation

int Even(int Arr[] , int iSize)
{
    int iCnt =0, iEvenCnt = 0 ; 


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2 ) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}   


int main()
{
    int *ptr  = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;
    
    // Step 1 : Accept size of array
    printf("Enter number of element : ");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));


    // Step 3 : Accepts the elements of array
    printf("Enter values of emelents\n");
    for(i = 0; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }
    // Step 4 : Call the function
    iRet = Even(ptr,iLength);
    printf("Number of even elements are : %d",iRet);

    free(ptr);
    return 0;
}