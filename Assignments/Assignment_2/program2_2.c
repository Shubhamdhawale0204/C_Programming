///////////////////////
//
//  Function Name : Display
//  Description :   Accept Number and print that number of *
//  Input :   4
//  Output :  *     *      *      *      
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void Display(int iNo)
{
    // Write updater
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}