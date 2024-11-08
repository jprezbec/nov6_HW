#include <stdlib.h>
#include <stdio.h>	

int calcMax(int *arr, int size) 
{
    int *ptr = arr;         
    int max = *ptr;      

    // Loop through the array using the pointer
    for (int i = 1; i < size; i++) {
    {   
        ptr++;               
        if (*ptr > max)    
            max = *ptr;      
        }
    }

    return max;              
}