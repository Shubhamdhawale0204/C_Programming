#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if(fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid input");
    }

    else if(fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for admission");
    }
    else 
    {
        printf("Not Eligible for admission");
    }

}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter the Marks and Age\n");
    scanf("%f %d",&fMarks, &iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}
