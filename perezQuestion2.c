#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "average.h"
#include "mode.h"
#include "stdDeviation.h"
#include <stdlib.h>
#include <stdio.h>	
    

int main() 
{
    int arr[] = {1, 3, 3, 2, 1, 4, 3, 5, 3}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    float mean, stdDeviation;
    int mode;

    int *counter = malloc(sizeof(int)); // Allocate memory for counter
    if (counter == NULL) 
    {              // Check for successful allocation
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
    return 0;
}