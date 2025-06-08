// write a program which display ASCII table. Table contains symbol,Decimal,
//  Hexadecimal and Octal representation of every member from 0 to 225.

#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    
    printf("-------------------------------------------------\n");
    printf("| Decimal | Symbol | Hexadecimal |   Octal    |\n");
    printf("-------------------------------------------------\n");

    for(iCnt = 0; iCnt <= 225; iCnt++)
    {
        printf("| %d |   %c    |     %x      |  %o   |\n", iCnt, (char)iCnt, iCnt, iCnt);
    }

    printf("-------------------------------------------------\n");
}

int main()
{
    DisplayASCII();
    return 0;
}