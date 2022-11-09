#include<stdio.h>

double Converter(float feet)
{
    float Ans = 1.1;
    
    
    Ans =  feet * 0.0929;   
    return Ans;
}
int main()
{
    float iValue1 = 0;
    double dRet = 0;

    printf("Enter area in Square feet : ");
    scanf("%f",&iValue1);

    dRet = Converter(iValue1);
    printf("Area in Square meter : %f",dRet);
    return 0;

}