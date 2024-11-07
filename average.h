#include <stdlib.h>
#include <stdio.h>	
    

float calcAverage(int x[], int n)   
{    
    int sum=0;
    float avg;
    for (int i = 0 ;i < n; ++i)
	{
		sum = sum + x[i];

	} // for-loop
	avg = sum/n;

    return avg;
}