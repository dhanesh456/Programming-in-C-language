// Accept range from user and display all even numbers in between Range
// Input : 23 35
// Output : 24,26,28,30,32,34

#include<stdio.h>

void Range(int Start ,int End)
{
    int iCnt = 0;
    if(Start > End)
    {
        printf("Invalid range\n");

    }
    for(iCnt = Start; iCnt <= End; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d \n",iCnt);
        }
    }
}
int main()
{
    int No1 = 0, No2 = 0;

    printf("Enter a start point : ");
    scanf("%d",&No1);
    printf("Enter End point : ");
    scanf("%d",&No2);

    Range(No1,No2);
    return 0;

}