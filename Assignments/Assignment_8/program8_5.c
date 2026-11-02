///////////////////////
//
//  Function Name : TableRev
//  Description :   Reversely prints the multiplication table of a given number
//  Input1 :  2
//  Output1 : 20   18  16  14  12  10  8   6   4   2 

//  Input2 :  5
//  Output2 : 50    45  40  35  30  25  20  15  10  5

//  Input3 :  -5
//  Output3 : 50    45  40  35  30  25  20  15  10  5

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMul = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}