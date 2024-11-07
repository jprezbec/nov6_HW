#include "math.h"


float calcStdDeviation(int x[], int n, float mean)   
{    
    float previous, finalRes;
    float sum=0;
    for (int i = 0 ;i < n; ++i)
	{
        float member = pow((x[i] - mean),2);
		sum = sum + member;
    } 
	previous = sum/n;
    finalRes = sqrt(previous);

    return finalRes;
}