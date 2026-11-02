///////////////////////
//
//  Function Name : OddFactorial
//  Description :   Calculates the factorial of odd numbers up to a given non-negative integer.

//      Input : 5
//      Output : 15 (5 * 3 * 1)

//      Input : -5
//      Output : 15 (5 * 3 * 1)

//      Input : 10
//      Output : 945 (9 * 7 * 5 * 3 * 1)

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
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

    iRet = OddFactorial(iValue);

    printf("Even Factorial of number is %d\n",iRet);

    return 0;
}