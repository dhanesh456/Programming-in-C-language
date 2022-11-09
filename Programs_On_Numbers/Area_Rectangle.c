#include<stdio.h>

double RectArea(float width , float height)
{
    double Area = 1.1;
    Area = width * height;
    return Area;
}
int main()
{
    float iValue1 = 0;
    float iValue2 = 0;
    double dRet = 0;

    printf("Enter width of a rectangle : ");
    scanf("%f",&iValue1);
    printf("Enter height of a rectangle : ");
    scanf("%f",&iValue2);

    dRet = RectArea(iValue1,iValue2);
    printf("Area of rectangle is : %f",dRet);
    return 0;

}