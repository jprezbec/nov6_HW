#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "average.h"
#include "mode.h"
#include "stdDeviation.h"
#include "maximum.h"
    

int main() 
{
    int arr[] = {1, 3, 3, 2, 1, 4, 3, 5, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    float mean, stdDeviation;
    int mode, max;

    int *counter = malloc(sizeof(int)); // Allocate memory for counter
    if (counter == NULL) 
    {              
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;

    }

    mode = findMode(arr, size, counter);
    printf("The mode of the array is: %d\n", mode);
    printf("Number of times that appears:  %d\n", *counter);

    mean = calcAverage(arr, size);
    printf("The average of the array is: %f\n", mean);

    stdDeviation = calcStdDeviation(arr, size, mean);
    printf("The standar deviation of the array is: %f\n", stdDeviation);

    max = calcMax(arr, size);
    printf("The max of the array is: %d\n", max);

    return 0;
}