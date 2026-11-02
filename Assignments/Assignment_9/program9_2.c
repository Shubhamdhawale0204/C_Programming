///////////////////////
//
//  Function Name : DollarToINT
//  Description :   Converts a dollar amount to Indian Rupees based on a fixed exchange rate.
//     Input1 : 10
//     Output1 : 700

//     Input2 : 3
//     Output2 : 270

//     Input3 : 1200
//     Output3 : 84000

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

int DollarToINT(int iNo)
{
    int INR = 70;
    int INRValue = 0;
    if(iNo > 0)
    {
        INRValue = iNo * INR;
    }
    return INRValue;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINT(iValue);

    printf("Value of INR is : %d",iRet);

    return 0;
}