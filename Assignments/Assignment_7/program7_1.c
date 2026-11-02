///////////////////////
//
//  Function Name : Pattern
//  Description :   Prints a pattern of asterisks and dollar signs based on the input number.
//  Input1 :   5
//  Output1 :  $   *   $   *    $    *   $   *   $   *
//  Input2 :   -3
//  Output2 :  $   *   $   *    $    *   
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if((iCount % 2) == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("$\t");
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}