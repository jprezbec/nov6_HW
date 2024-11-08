int findMode(int arr[], int size, int *counter) 
{
    // Step 1: Find the maximum element in the array to determine the frequency array size
    int maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) 
        {
            maxElement = arr[i];
        }
    }

    // Step 2: Create a frequency array of size maxElement + 1 (assuming non-negative integers)
    int frequency[maxElement + 1];

    for (int i = 0; i <= maxElement; i++)
    {
        frequency[i] = 0;
    }

    // Step 3: Populate the frequency array
    for (int i  = 0; i < size; i++) 
    {
        frequency[arr[i]]++;
    }

    // Step 4: Find the mode by locating the maximum frequency
    int mode = arr[0];
    int maxFrequency = frequency[mode];
    for (int i = 1; i <= maxElement; i++) 
    {
        if (frequency[i] > maxFrequency) 
        {
            maxFrequency = frequency[i];
            mode = i;
        }        
    }

    if (counter != NULL) { // Check if counter points to valid memory
        *counter = maxFrequency; // Set counter to the frequency of the mode
    }

    return mode;
}