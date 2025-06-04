/*
    Accept N number from user and return the smallest number

    Input  :   N  :   6
               Elements : 85   66   3  66   93  88

    Output  :  3
*/

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0]; 

    for(int iCnt = 1; iCnt < iSize; iCnt++)  
    {
        if(iMin > Arr[iCnt])  
        {
            iMin = Arr[iCnt]; 
        }
    }
    return iMin; 
}

int main()
{
    int iLenght = 0;
    int *Ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter Number of Element : \n");
    scanf("%d",&iLenght);

    Ptr = (int*)malloc(iLenght * sizeof(int));

    printf("Enter Elements : \n");
    for(iCnt = 0; iCnt < iLenght; iCnt++)
    {
        scanf("%d", &Ptr[iCnt]);
    }

    iRet = Minimum(Ptr,iLenght);

    printf("Minimum number is  : %d", iRet);

    free(Ptr);
    return 0;

}