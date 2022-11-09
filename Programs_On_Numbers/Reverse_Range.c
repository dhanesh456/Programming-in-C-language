// Accept range from user and display all numbers in between range in reverse order
// Input : 10, 18
// Output : 18  17  16  15   14  13  12  11  10

#include<stdio.h>

void Range(int Start ,int End)
{
    int iCnt = 0;
    if (Start > End)
    {
        printf("Invalid Range\n");
    }
    
    for(iCnt = End; iCnt >= Start;iCnt--)
    {
        printf("%d\t",iCnt);
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