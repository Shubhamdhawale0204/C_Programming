///////////////////////
//
//  Function Name : PrintEven
//  Description :   Print that Number of Even Numbers
//  Input :   7        
//  Output :  2     4      6      8     10     12      14     
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}