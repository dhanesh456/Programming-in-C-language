// Accept range from user and display all numbers on between
// Input : 23 35
// Output : 23 24,25,26,27,28,29,30,31,32,33,34,35

#include<stdio.h>

void Range(int Start ,int End)
{
    int iCnt = 0;
    if(Start >= End)
    {
        printf("Invalid range\n");

    }
    for(iCnt = Start; iCnt <= End; iCnt++)
    {
        printf("%d \n",iCnt);
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