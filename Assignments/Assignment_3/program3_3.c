///////////////////////
//
//  Function Name : DisplayEvenFactors
//  Description :   Print Even Factors of the Number
//  Input :   36        
//  Output :  2     4       6       12      18     
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;

    }

    for(i = 1; i<=iNo/2; i++)
    {
        if((iNo % i)== 0 && (i % 2) == 0)
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

    DisplayEvenFactors(iValue);

    return 0;
}