#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0 )
    {
        printf("Number is : Positive");
    }
    else if(iValue < 0)
    {
        printf("Number is : Negative");
    }
    else
    {
        printf("Number is : Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number\n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}