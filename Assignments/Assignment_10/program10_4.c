///////////////////////
//
//  Function Name : FhtoCs
//  Description :   Converts a temperature from Fahrenheit to Celsius

//    Input : 10
//    Output : -12.2222 (10 - 32) * (5/9)

//    Input : 34
//    Output : 1.11111 (34 - 32) * (5/9)

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

double FhtoCs(float fTemp)
{
    float Fahrenheit = fTemp;
    float OneCelsius = ((Fahrenheit - 32) * (5.0/9.0));
    
    return OneCelsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Fahrenheit to Celsius Conversion is : %.4f",dRet);

    return 0;
}