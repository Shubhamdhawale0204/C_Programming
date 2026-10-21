///////////////////////
//
//  Function Name : DisplayFactor
//  Description :   Print Even Factors of the Number
//  Input :   24       
//  Output :  1     2     4       6       12         
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i<=iNo/2; i++)
    {
        if((iNo % i) == 0)
        {
        printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}