///////////////////////
//
//  Function Name : Display
//  Description :   Prints numbers from 1 to the given integer
//  Input :   8
//  Output :  1   2   3   4   5   6   7   8
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}