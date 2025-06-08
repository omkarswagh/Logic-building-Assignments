/*
    Accept character from user. If character is small display its corresponding capital character,
    and if it is small then display its corresponding capital. in other case display as it is

    Input : Q
    output : q

    input : 4
    output : 4
*/

#include<stdio.h>

void Display(char Ch)
{

        if(Ch >= 'A' && Ch <= 'Z')
        {
            Ch = Ch + 32;
        }
        else if(Ch >= 'a' && Ch <= 'z')
        {
            Ch = Ch - 32;
        }
        else
        {
            Ch = Ch;
        }
    
    printf("%c",Ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}