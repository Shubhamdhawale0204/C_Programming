///////////////////////
//
//  Function Name : Display
//  Description :   Print 5 to 1 numbers on screen
//  Input :   
//  Output :  5  4  3  2  1    
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////
#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i>=1)
    {
        printf("%d\t",i);
        i--;
    }
}

int main()
{
    Display();

    return 0 ;
}