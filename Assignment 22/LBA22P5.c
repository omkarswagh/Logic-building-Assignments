/*
    Accept division of student from user and depends on the division display
    exam timing. There are 4 divisions in school as A,B,C,D.Exam of division
    A at 7AM, B at 8.30Am, C at 9.20Am and D at 10.30Am.
    (Application Should be case insensitive)

    Input : C

    Output : Your exam at 9.20 Am

    Input  :  d

    Output :  Your exam at 10.30 Am
*/
#include <stdio.h>

void DisplaySchedule(char cDivision)
{
    if((cDivision >= 'a') && (cDivision <= 'z'))
    {
        cDivision = cDivision - 32;
    }

    switch (cDivision)
    {
        case 'A':
            printf("Your exam is at 7AM\n");
            break;
        case 'B':
            printf("Your exam is at 8.30AM\n");
            break;
        case 'C':
            printf("Your exam is at 9.20AM\n");
            break;
        case 'D':
            printf("Your exam is at 10.30AM\n");
            break;
        default:
            printf("Invalid division entered. Please enter A, B, C, or D.\n");
    }
}

int main()
{
    char cValue;

    printf("Enter your division (A, B, C, or D): ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}