//Accept two numbers from user and display first
//number in second number of times
//Input: 12 5
//Output : 12 12 12 12 12


#include<stdio.h>

void Display(int iValue1 ,int iValue2)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue2; iCnt++)
    {
        printf("%d\n",iValue1);
    }

}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    printf("Enter a value that you want to print : ");
    scanf("%d",&iNo1);

    printf("Number of times you want to print : ");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;


}
