///////////////////////
//
//  Function Name : DisplayConvert
//  Description :   Convert Case of the Character 
//  Input :   A     d 
//  Output :  a     D
//  Author : Shubham Sachin Dhawale
//  Date :  22/10/2026
//
///////////////////////

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue>='a' && cValue<='z')
    {
        printf("%c",cValue-32);

    }
    else if(cValue>='A' && cValue<='Z')
    {
        printf("%c",cValue+32);

    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}