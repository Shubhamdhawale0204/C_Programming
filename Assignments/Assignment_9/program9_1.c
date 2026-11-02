///////////////////////
//
//  Function Name : Display
//  Description :   Prints a pattern of * and # on the same line, separated by tabs.
//  
//  Input : 5
//  Output : * * * * * # # # # #

//  Input : 6
//  Output : * * * * * * # # # # # # #

//  Input : -5
//  Output : * * * * * # # # # #

//  Input : 2
//  Output : * * # #         
//  
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}