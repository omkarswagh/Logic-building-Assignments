/*
    Accept Charcter from user and check wheather it is Digit or not
    (0 - 9)

    Input : 7

    Output : TRUE

    Input  :  d

    Output :  FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char Ch)
{
    if((Ch >= '0') && (Ch <= '9'))
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
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }
    return 0;
}