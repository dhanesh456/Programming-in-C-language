// Accept N numbers from user and Display all such numbers 
// which are divisible by 5 and are even



#include<stdio.h>
#include<stdlib.h>

int Divisible(int Arr[],int iSize)
{
    int iCnt = 0;
    int iNo = 0;

    printf("Number are Even and Divisible by 5 from array are : \n");
    for(iCnt=0; iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 5 == 0) && (Arr[iCnt] % 2 == 0) )
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iNo = 0;
    
    printf("Enter number of element you want to store in array : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter values of element\n");
    for(iNo = 0; iNo < iLength;iNo++)
    {
        scanf("%d",&ptr[iNo]);
        
    }
    Divisible(ptr,iLength);

    free(ptr);
    
    return 0;


}