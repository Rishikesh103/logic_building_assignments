#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 5 ==0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main ()
{
    int iCnt = 0,iSize = 0;
    int *p = NULL;

    printf("enter the no of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unavle to allocate memory : \n");
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p, iSize);

    free(p);

    return 0;
}