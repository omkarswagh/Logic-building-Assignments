/*  special symbol only
    Input : %
    Output : True

    Input : d
    Output : false

    Input : @
    Output : True
*/
#include <stdio.h>
#include <stdbool.h>

bool CheckSpecial(char Ch) 
{
    bool bFlag = false; // Initialize as false

    if ((Ch >= 'A') && (Ch <= 'Z')) 
    {   
        bFlag = false; // It's an uppercase letter
    } 
    else if ((Ch >= 'a') && (Ch <= 'z')) 
    {
        bFlag = false; // It's a lowercase letter
    } 
    else if ((Ch >= '0') && (Ch <= '9')) 
    {
        bFlag = false; // It's a digit
    }
    else 
    {
        bFlag = true; // Anything else is considered a special character
    }

    return bFlag;
}

int main() 
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character: ");
    scanf("%c", &cValue);

    bRet = CheckSpecial(cValue);

    if (bRet == true) 
    {
        printf("It is a Special Character\n");
    } 
    else 
    {
        printf("It is not a Special Character\n");
    }

    return 0;
}