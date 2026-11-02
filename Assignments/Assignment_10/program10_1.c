///////////////////////
//
//  Function Name : CircleArea
//  Description :   Calculates the area of a circle given its radius.
//    Input : 5.3
//    Output : 88.2026

//    Input : 10.4
//    Output : 339.6224

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    float fArea = 0.0;

    fArea = (PI * fRadius * fRadius);

    return fArea;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter the number\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4lf",dRet);

    return 0;
}