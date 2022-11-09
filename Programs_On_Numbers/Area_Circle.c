#include<stdio.h>


double Area(float iRadius)
{
    float Area = 0;
    float PI = 3.14;

    Area = PI * iRadius * iRadius;
    return Area;

}

int main()
{
    float iValue1 = 0;
    double iRet = 0;

    
    printf("Enter Radius of circle : ");
    scanf("%f",&iValue1);
    
    
    iRet = Area(iValue1);
    printf("Area of circle = %f",iRet);

    return 0;
}
