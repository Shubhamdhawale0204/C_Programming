///////////////////////
//
//  Function Name : Display
//  Description :   If Number less than 10("Hello") otherwise("Demo") 
//  Input :   5       
//  Output :  Hello      
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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