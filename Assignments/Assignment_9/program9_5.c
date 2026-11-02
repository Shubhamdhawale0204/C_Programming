///////////////////////
//
//  Function Name : FactorialDiff
//  Description :   Calculates the difference between the product of even numbers and the product of odd numbers up to a given non-negative integer.

//        Input : 5
//        Output : -7 (8 - 15)

//        Input : -5
//        Output : -7 (8 - 15)

//        Input : 10
//        Output : 2895 (3840 - 945)

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 0;
    int iFact2 = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1, iFact1 = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact1 = iFact1 * iCnt;
        }
    }
    for(iCnt = 1, iFact2 = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 1)
        {
            iFact2 = iFact2 * iCnt;
        }
    }
    return iFact1-iFact2;




}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}