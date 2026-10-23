
#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    int iBill = 0;

    if(iUnits < 0)
    {
        printf("Invalid Unit Consumption");
    }
    else if(iUnits <= 100)
    {
        iBill = iUnits * 5;
        printf("Electricity Bill: Rs. %d", iBill);
    }
    else if(iUnits <= 200)
    {
        iBill = (100 * 5) + ((iUnits - 100) * 7);
        printf("Electricity Bill: Rs. %d", iBill);
    }
    else
    {
        iBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
        printf("Electricity Bill: Rs. %d", iBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units\n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}
