///////////////////////
//
//  Function Name : RectArea
//  Description :   Calculates the area of a rectangle given its width and height.
//    Input :  5.3 9.78
//    Output : 51.834
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    float fArea = 0.0;

    fArea = (fWidth * fHeight);

    return fArea;
}
int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is : %.3f",dRet);

    return 0;
}