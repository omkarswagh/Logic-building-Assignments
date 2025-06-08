/*
    Accept Charcter from user and check wheather it is Small letter or not
    (a - z)

    Input : g

    Output : TRUE

    Input  :  D

    Output :  FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char Ch)
{
    if((Ch >= 'a') && (Ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character : \n");
    scanf("%c", &cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Small letter");
    }
    else
    {
        printf("It is not Small letter");
    }
    return 0;
}