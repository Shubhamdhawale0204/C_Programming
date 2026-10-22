#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age");
        
    }
    else if(iAge >=18 )
    {
        printf("Eligible for Voting");
    }
    else if(iAge < 18)
    {
        printf("Not Eligible for Voting");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter the Age\n");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}