///////////////////////
//
//  Function Name : Number
//  Description :   Determines the size category of a given integer
//  Input :     75
//  Output :    Medium
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}