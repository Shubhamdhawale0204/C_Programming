///////////////////////
//
//  Function Name : EvenFactorial
//  Description :   Calculates the product of all even numbers up to a given non-negative integer.
//        Input : 5
//        Output : 8 (4 * 2)

//        Input : -5
//        Output : 8 (4 * 2)

//        Input : 10
//        Output : 3840 (10 * 8 * 6 * 4 * 2)

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
        iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of a number is : %d",iRet);

    return 0;
}