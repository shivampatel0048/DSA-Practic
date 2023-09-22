#include <iostream>
using namespace std;

// Function to find the maximum subarray sum using Kadane's algorithm
int kadane(int arr[], int n)
{
    int res = arr[0];
    int maxEnding = arr[0];

    for (int i = 1; i < n; ++i)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }

    return res;
}

// Function to find the maximum circular subarray sum
int maxCircularSubarraySum(int arr[], int n)
{
    // Calculate the maximum subarray sum using Kadane's algorithm
    int max_kadane = kadane(arr, n);

    // Calculate the total sum of the array
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
        arr[i] = -arr[i];
    }

    // Calculate the maximum circular subarray sum
    int max_circular = total_sum + kadane(arr, n);

    // Handle the case where the entire array is negative (max_circular == 0)
    if (max_circular == 0)
    {
        return max_kadane;
    }

    return max(max_kadane, max_circular);
}

int main()
{
    int arr[] = {8, -4, 3, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max_circular_sum = maxCircularSubarraySum(arr, n);

    cout << "Maximum circular subarray sum is: " << max_circular_sum << endl;

    return 0;
}
