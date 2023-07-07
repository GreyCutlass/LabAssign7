#include <stdio.h>
#include <stdlib.h>

void swap(int arr[], unsigned int firstElement, unsigned int secondElement, size_t arrSize)
{

    
    if(firstElement > arrSize || secondElement > arrSize)
    {

        return;

    }
    if(firstElement < 0 || secondElement < 0)
    {

        return;

    }
    

    int temp = arr[firstElement];
    arr[firstElement] = arr[secondElement];
    arr[secondElement] = temp;


}

void bubbleSort(int arr[], size_t arrSize)
{

    int count = 0;
    int previousCount = 0;
    for(int index = 0; index < arrSize; index++)
    {

        for(int innerIndex = 0; innerIndex < (arrSize-1); innerIndex++)
        {

            if(arr[innerIndex] > arr[innerIndex + 1])
            {

                swap(arr, innerIndex, innerIndex+1, arrSize);
                count++;

            }

        }

        printf("Steps of pass %d are: %d\n", index, (count-previousCount));
        /*
        if(previousCount == count)
        {
            printf("Full count is %d.\n", count);
            return;

        }
        */
        previousCount = count;
        
    }

    printf("Full count is %d.\n", count);

}

void arrPrint(int arr[], size_t size)
{

    for(int index = 0; index < size; index++)
    {


        printf("%d ", arr[index]);


    }
    printf("\n");

}

int main()
{

    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    size_t size = sizeof(arr)/sizeof(int);

    arrPrint(arr, size);

    bubbleSort(arr, size);

    arrPrint(arr,size);
}