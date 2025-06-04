/*
    accept N number from user and display summation of digits of each number

    Input  :   N  :   6
               Elements : 8285   665   3  66   935  858

    Output  :  17   17   3   13   17   21
*/

#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    for (int iCnt = 0; iCnt < iSize; iCnt++)  
    {
        // incomplete
    }
}

int main()
{
    int iLength = 0; 
    int *Ptr = NULL;  

    printf("Enter Number of Elements: \n");
    scanf("%d", &iLength);

    Ptr = (int*)malloc(iLength * sizeof(int));

    // Memory allocation check
    if (Ptr == NULL)  
    {
        printf("Memory allocation failed!\n");
        return -1;  
    }

    printf("Enter Elements: \n");
    for (int iCnt = 0; iCnt < iLength; iCnt++)  
    {
        scanf("%d", &Ptr[iCnt]);
    }

    Digits(Ptr,iLength);

    free(Ptr);  // Free allocated memory
    return 0;
}