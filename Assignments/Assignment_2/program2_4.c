///////////////////////
//
//  Function Name : Display
//  Description :   Display First number Second number of times
//  Input :   12     5       
//  Output :  12    12     12      12      12      12  
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void Display(int iNo, int Frequency)
{
    int i = 0;

    // Write updater

    for(i = 1; i<=Frequency; i++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter the Number\n");
    scanf("%d",&iValue);

    printf("Enter Frequency\n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}