///////////////////////
//
//  Function Name : OddDisplay
//  Description :   Displays all odd numbers from 1 to the given number iNo
//  Input :    18 
//  Output :    1   3   5   7   11  13  15  17
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if((iCount % 2) == 1)
        {
            printf("%d\t",iCount);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}