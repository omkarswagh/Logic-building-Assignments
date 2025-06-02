// Accept number from user and Display below pattern
// Input   :  5
// Output  :  A     B      C      D     E

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  File Name :     LBA11P1.c
//  Description :   Accept number from user and Display pattern
//  Author :        Omkar Santosh Wagh
//  Date :          02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name :      Pattern
//  Description  :       Accept number from user and Display pattern
//  Input Arguments :    Integer
//  Output :             Character
//  Author :             Omkar Santosh Wagh 
//  Date :               02/06/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    char Ch = '\0';

    for(iCnt = 1,Ch = 'A'; iCnt <= iNo; iCnt++,Ch++)
    {
        printf("%c\t",Ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    // Function Call
    Pattern(iValue);

    return 0;
}