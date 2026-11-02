///////////////////////
//
//  Function Name : Factorial
//  Description :   Calculates the factorial of a given integer.
//  Input1 :        5   
//  Output1 :       120        (5*4*3*2*1)
//  Input2 :        -5   
//  Output2 :       120        (5*4*3*2*1)
//  Input3 :        4   
//  Output3 :       24        (4*3*2*1)
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCount = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCount = iNo, iFact = 1; iCount >= 1; iCount--)
    {
        iFact = iFact * iCount;
    }
    return iFact;

    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is : %d",iRet);

    return 0;
}