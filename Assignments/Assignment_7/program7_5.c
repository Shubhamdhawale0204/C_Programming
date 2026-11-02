///////////////////////
//
//  Function Name : MultipleDisplay
//  Description :   This function takes an integer as input and prints the first five multiples of that integer.
//  Input :     4
//  Output :    4   8   12  16  20
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int iCount = 0;
    int iMul = 0;

    for(iCount = 1; iCount < 6; iCount++)
    {
        iMul = iCount * iNo;
        printf("%d\t",iMul);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;

}