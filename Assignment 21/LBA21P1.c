/*
    Accept N number from user and return the largest number

    Input  :   N  :   6
               Elements : 85   66   3  66   93  88

    Output  :  93
*/

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0]; 

    for(int iCnt = 1; iCnt < iSize; iCnt++)  
    {
        if(iMax < Arr[iCnt])  
        {
            iMax = Arr[iCnt]; 
        }
    }
    return iMax; 
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

    iRet = Maximum(Ptr,iLenght);

    printf("Maximum number is  : %d", iRet);

    free(Ptr);
    return 0;

}