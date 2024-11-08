#include <stdlib.h>
#include <stdio.h>
#include "maximum.h"
    

int main() 
{
    int arr[] = {1, 3, 3, 2, 1, 4, 3, 5, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int max;
    
    max = calcMax(arr, size);
    printf("The max of the array is: %d\n", max);

    return 0;
}