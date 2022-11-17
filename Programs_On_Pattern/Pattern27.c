/*

$       *       *       *       *       $
$       *       *       *       *       $
$       *       *       *       *       $
$       *       *       *       *       $
$       *       *       *       *       $
$       *       *       *       *       $
    

*/

#include<stdio.h>

void Display(int iRow , int iCol)
{
    int i = 0;
    int j = 0;


    for(i = 1; i <= iRow; i++)  
    {
        for(j = 1; j <= iCol; j++)
        {
            if((j == 1) || (j == iRow))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t",i);
            }
           
        }
        printf("\n");
    } 


}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter number of rows : ");
    scanf("%d",&iValue1);  

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}


