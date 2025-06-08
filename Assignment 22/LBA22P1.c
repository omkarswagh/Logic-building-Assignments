/*
    Accept Charcter from user and check wheather it is alphabet or not
    (A-z,a-z)

    Input : F

    Output : TRUE

    Input  :  &

    Output :  FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char Ch)
{
    if((Ch >= 'A') && (Ch <= 'Z') || (Ch >= 'a')  &&  (Ch <= 'z'))
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
        printf("It is Character");
    }
    else
    {
        printf("It is not Character");
    }
    return 0;
}