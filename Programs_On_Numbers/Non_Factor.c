//Accept number from user and diplay nonfactor

#include<stdio.h> 
#include<stdbool.h>


void Factor(int iNo)
{
    int iAns = 0;
    printf("Non Factors of %d are :   \n",iNo);
    for(iAns = 1; iAns < iNo; iAns++)
    {
        if(iNo % iAns != 0)
        {
            printf("%d\n",iAns);
        }
    }



}




int main()
{

    int iValue = 0;
    
    printf("Enter a value : \n");
    scanf("%d",&iValue);

    Factor(iValue);

    return 0;
}
