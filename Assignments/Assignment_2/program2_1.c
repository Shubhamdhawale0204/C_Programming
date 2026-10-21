///////////////////////
//
//  Function Name : Display
//  Description :   Accept Number and print that number of *
//  Input :   5
//  Output :  *     *      *      *      *      
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // Write updater

    while(iCnt <= iNo)
    {
        printf(" * ");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}