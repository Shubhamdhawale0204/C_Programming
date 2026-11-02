///////////////////////
//
//  Function Name : Display
//  Description :   Displays the English word corresponding to the absolute value of an integer(Single digit)
//  Input1 :        9   
//  Output1 :       Nine
//  Input2 :        -3   
//  Output2 :       Three
//  Input3 :        12   
//  Output3 :       Invalid
//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

void Display(int iNo)
{

    if(iNo > 9)
    {
        printf("Invalid Number");
    }
    else if(iNo == 1 || iNo == -1)
    {
        printf("One");
    }
    else if(iNo == 2 || iNo == -2)
    {
        printf("Two");
    }
    else if(iNo == 3 || iNo == -3)
    {
        printf("Three");
    }
    else if(iNo == 4 || iNo == -4)
    {
        printf("Four");
    }
    else if(iNo == 5 || iNo == -5)
    {
        printf("Five");
    }
    else if(iNo == 6 || iNo == -6)
    {
        printf("Six");
    }
    else if(iNo == 7 || iNo == -7)
    {
        printf("Seven");
    }
    else if(iNo == 8 || iNo == -8)
    {
        printf("Eight");
    }
    else if(iNo == 9 || iNo == -9)
    {
        printf("Nine");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}