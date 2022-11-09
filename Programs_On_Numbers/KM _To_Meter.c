#include<stdio.h>

double KMtoMeter(float KM)
{
    double Ans = 0.0;
    Ans = KM *1000;
    return Ans;
}
int main()
{
    float iValue1 = 0;
    double dRet = 0;

    printf("Enter distance in Kilometer : ");
    scanf("%f",&iValue1);

    dRet = KMtoMeter(iValue1);
    printf("Distancec in meter : %0.3f",dRet);
    return 0;

}