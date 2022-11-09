//Program which accept number from user and if number is less than 50
// then print small , if it is greater than 50 and less then 100 print medium 
// if it is greateer than 100 then print larger

#include<stdio.h>


void Display(int No)
{
    if(No<=50)
    {
        printf("Smaller");
    }
    if (No>50 && No<=100)
    {
        printf("Medium");
    }
    if(No>100)
    {
        printf("Large");
    }
    
}

int main()
{
    int iValue = 0;
    printf("Enter a value : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}