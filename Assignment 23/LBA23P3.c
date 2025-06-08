/*
    Input : Q
    Output : Q  R  S  T  U  V  W  X  Y  Z

    Input : m
    Output : m  l  k  j  h  g  f  e  d  c  b  a

    Input : 8
    Output : 
*/
#include<stdio.h>

void Display(char Ch)
{
    if((Ch >= 'A') && (Ch <= 'Z'))
    {   

        while(Ch <= 'Z')
        {
            printf("%c\t", Ch);
            Ch++;
        }
    }
    else if((Ch >= 'a') && (Ch <= 'z'))
    {
        while(Ch >= 'a')
        {
            printf("%c\t", Ch);
            Ch--;
        }
    }
    else
    {
        printf("%c",Ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}