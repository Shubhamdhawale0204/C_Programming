///////////////////////
//
//  Function Name : Table
//  Description :   Prints the multiplication table of a given number up to 10
//  Input1 :   2
//  Output1 :  2   4   6   8   10  12  14  16  18  20
//  Input2 :   5
//  Output2 :  5    10  15  20  25  30  35  40  45  50
//  Input3 :   -5
//  Output3 :  5    10  15  20  25  30  35  40  45  50
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}