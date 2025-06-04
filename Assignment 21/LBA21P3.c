/*
    Accept N number from user and return
    the difference between the largest and smallest number.

    Input  :   N  :   6
               Elements : 85   66   3  66   93  88

    Output  :  90 (93 - 3)
*/

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];  
    int iMax = Arr[0];  

    for (int iCnt = 1; iCnt < iSize; iCnt++)  
    {
        if (iMin > Arr[iCnt])  
        {
            iMin = Arr[iCnt];  
        }
        else if (iMax < Arr[iCnt])  
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax - iMin;  
}

int main()
{
    int iLength = 0; 
    int *Ptr = NULL;  
    int iRet = 0;

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

    iRet = Difference(Ptr, iLength);

    printf("Difference is: %d\n", iRet); 

    free(Ptr);  // Free allocated memory
    return 0;
}