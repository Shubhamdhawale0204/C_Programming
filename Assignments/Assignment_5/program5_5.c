
#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("Character is Uppercase");
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("Character is Lowercase");
    }
    else if(cValue >= '0' && cValue <= '9')
    {
        printf("Character is a Digit");
    }
    else
    {
        printf("Character is a Special Symbol");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
