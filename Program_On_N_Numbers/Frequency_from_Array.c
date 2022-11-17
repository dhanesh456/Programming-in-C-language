// Accept N numbers from user and return Frequency of 11 from it 



#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int No)
{
    int iCnt = 0;
    int freq = 0;
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        
        if(Arr[iCnt] == No)
        {
            freq++;
        }
        
    }
    return freq;
}


int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iNo = 0;
    int iRet = 0;
    int iValue = 0;
    
    printf("Enter number of element you want to store in array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter values of element\n");
    for(iNo = 0; iNo < iLength;iNo++)
    {
        scanf("%d",&ptr[iNo]);
        
    }
    printf("Enter a number to find its frequency from array : ");
    scanf("%d",&iValue);
    iRet = Frequency(ptr,iLength,iValue);
    printf("Frequency of %d from the array is : %d",iValue,iRet);

    free(ptr);
    
    return 0;


}