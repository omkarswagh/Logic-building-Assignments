/*
    Accept Character from user and display its ASCII value in decimal,octal and hexadecimal formate

    Input : A

    output :  Decimal    65
              Octal      0101
              Hexadecimal 0X41
*/

#include<stdio.h>

void Display(char Ch)
{
    printf("Decimal Value is : %d \n",Ch);
    printf("Octal Value is : %o \n",Ch);
    printf("Hexadecimal Value is : %x \n",Ch);


}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}