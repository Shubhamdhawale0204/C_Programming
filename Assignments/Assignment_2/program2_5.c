///////////////////////
//
//  Function Name : BOOL ChkEven
//  Description :   Check Number is Even or Odd
//  Input :   10       
//  Output :  Even      
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}