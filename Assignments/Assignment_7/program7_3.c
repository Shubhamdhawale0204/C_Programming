///////////////////////
//
//  Function Name : Display
//  Description :   Displays numbers from -iNo to iNo, inclusive, separated by tabs.
//  Input :   4
//  Output :  -4    -3   -2   -1   0   1   2   3   4
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = -iNo; iCount <= iNo; iCount++)
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