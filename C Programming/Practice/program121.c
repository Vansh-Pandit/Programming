#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Elements of the array are :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *Brr = NULL;
    int iLenght = 0, iCnt = 0;

    // Step 1: Accept the number of element
    printf("Enter number of elements : ");
    scanf("%d",&iLenght);

    // Step 2 : allocate the memory
    Brr = (int*)malloc(iLenght*sizeof(int));

    // Step 3 : Accept the value from user
    printf("Enter the elements : \n");
    for(iCnt =0  ;iCnt < iLenght; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    //Step 4 : use the memory(Logic)
    Display(Brr,iLenght);

    // Step 5 : Deallocate the memory
    free(Brr);

    return 0;
}