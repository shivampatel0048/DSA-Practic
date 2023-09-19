#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

// Function to find the maximum difference arr[j] - arr[i]
int maxDifference(int arr[], int n)
{
    int maxDiff = arr[1] - arr[0]; // Initialize with the first pair

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int diff = arr[j] - arr[i];
            // if (diff > maxDiff)
            // {
            //     maxDiff = diff;
            // }
            maxDiff = max(maxDiff,diff);
        }
    }

    return maxDiff;
}

// Another Aproach
int maxDifference(int arr[], int n)
{
    int maxDiff = arr[1] - arr[0], minVal = arr[0]; // Initialize with the first pair

    for (int i = 1; i < n; i++)
    {
        
            maxDiff = max(maxDiff,arr[i]-minVal);
            minVal = min(minVal,arr[i]);
        
    }

    return maxDiff;
}

int main()
{
    int arr[] = {2, 7, 9, 5, 1, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxDifference(arr, n);

    cout << "Maximum difference: " << result << endl;

    return 0;
}
