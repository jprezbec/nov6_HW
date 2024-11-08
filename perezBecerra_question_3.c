#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "average.h"
#include "mode.h"
#include "stdDeviation.h"
#include "maximum.h"
#define SIZE 20

int main()
{
    int number[SIZE]; 
    int i=0;
    FILE* in_file = fopen("scores-data.txt", "r"); //only open a pre-exisiting file in read mode. 
         
    if (! in_file ) // equivalent to saying if ( in_file == NULL ) 
    {  
        printf("oops, file can't be read\n"); 
        exit(-1); 
    } 
    // attempt to read the next line and store 
    // the value in the "number" variable 
    while ( fscanf(in_file, "%d", &number[i] ) == 1 )  
    { 
        printf("We just read %d\n", number[i]);
        i++; 
    } 

    int *counter = malloc(sizeof(int)); // Allocate memory for counter
    if (counter == NULL) 
    {              
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;

    }
	int mode;
	float mean, stdDeviation;

    mean = calcAverage(number, SIZE);
    printf("The average of the array is: %f\n", mean);

    mode = findMode(number, SIZE, counter);
    printf("The mode of the array is: %d\n", mode);
    printf("Number of times that appears:  %d\n", *counter);

    stdDeviation = calcStdDeviation(number, SIZE, mean);
    printf("The standar deviation of the array is: %f\n", stdDeviation);

}


