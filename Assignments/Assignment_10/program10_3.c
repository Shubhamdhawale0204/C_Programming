///////////////////////
//
//  Function Name : KMtoMeter
//  Description :   Converts kilometers to meters

//    Input : 5
//    Output : 5000

//    Input : 12
//    Output : 12000

//  Author : Shubham Sachin Dhawale
//  Date :  02/11/2026
//
///////////////////////
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int OneMeter = 1000;
    int Conversion = 0;

    Conversion = iNo * OneMeter;

    return Conversion;
    
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Conversion to Meter is : %d",iRet);

    return 0;
}