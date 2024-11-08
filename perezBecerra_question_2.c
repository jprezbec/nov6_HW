#include<stdio.h>
#include<stdlib.h>
#include <stddef.h>
#include "average.h"
#include "mode.h"
#include "stdDeviation.h"
#include "maximum.h"

int main(){
	//int n = 5;
	//int max_student_size = 1000;
	int x[5];//array of variable length. 
	//x[1]= x[2]= wrong because 
	// indexing begins at 0. x[0] and x[1].

	x[0]= 10;
	x[1]= 7;
	x[2]= 5;
	x[3]= 9;
	x[4]= 10;
	double sum = 0.0;//sum 41
	for (int i = 0 ;i < 5; ++i)
	{
		sum +=x[i];
		printf("for i = %d, sum = %lf \n ", i, sum );
			//more for checking if the right sum is being 
			//computed.
	} // for-loop

    int *counter = malloc(sizeof(int)); // Allocate memory for counter
    if (counter == NULL) 
    {              
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;

    }
	int mode;
	float mean, stdDeviation;

    mean = calcAverage(x, 5);
    printf("The average of the array is: %f\n", mean);

    mode = findMode(x, 5, counter);
    printf("The mode of the array is: %d\n", mode);
    printf("Number of times that appears:  %d\n", *counter);

    stdDeviation = calcStdDeviation(x, 5, mean);
    printf("The standar deviation of the array is: %f\n", stdDeviation);

}


