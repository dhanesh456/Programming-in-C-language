// Accept N numbers from user and return frequency of even numbers



#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize)
{
    int iCnt = 0;
    int Even = 0;
    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        
        if(Arr[iCnt]%2 == 0)
        {
            Even++;
        }
        
    }
    return Even;
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
    iRet = Frequency(ptr,iLength);
    printf("Frequency of even numbers are : %d",iRet);

    free(ptr);
    
    return 0;


}