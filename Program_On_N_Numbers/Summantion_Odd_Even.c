// Accept N numbers from user and return difference between summation
// of even elements and summation of odd elements



#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEven = 0;
    int iOdd = 0;

    for(iCnt=0; iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return(iEven - iOdd);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iNo = 0;
    int iRet = 0;
    printf("Enter number of element you want to store in array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter values of element\n");
    for(iNo = 0; iNo < iLength;iNo++)
    {
        scanf("%d",&ptr[iNo]);
        
    }
    iRet = Summation(ptr,iLength);
    printf("Summation is : %d",iRet); 
    free(ptr); 
    return 0;


}