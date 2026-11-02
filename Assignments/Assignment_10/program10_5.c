///////////////////////
//
//  Function Name : SquareMeter
//  Description :   Converts an integer number of square feet to square meters.
//    Input : 5
//    Output : 0.464515

//    Input : 7
//    Output : 0.650321

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

double SquareMeter(int iNo)
{
    double OneSquareFeet = 0.09290304;
    double Conversion = 0.0;

    Conversion = iNo * OneSquareFeet;

    return Conversion;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is : %.6lf",dRet);

    return 0;
}