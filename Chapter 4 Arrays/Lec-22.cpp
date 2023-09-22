// #include <iostream>
// using namespace std;

// int maxSum(int arr[], int n)
// {
//     int res = arr[0]; // Initialize the result and maxEnding variables with the first element of the array
//     int maxEnding = arr[0];

//     for (int i = 1; i < n; i++)
//     {                                                // Start the loop from the second element of the array
//         maxEnding = max(maxEnding + arr[i], arr[i]); // Calculate the maximum ending here or start a new subarray
//         res = max(res, maxEnding);                   // Update the result with the maximum sum found so far
//     }

//     return res; // Return the maximum subarray sum
// }

// int main()
// {
//     int arr[] = {-2, -3, 4, -1, 2}; // Example array
//     int n = sizeof(arr) / sizeof(arr[0]);      // Calculate the size of the array

//     int maxSubarraySum = maxSum(arr, n); // Call the maxSum function

//     cout << "Maximum Subarray Sum: " << maxSubarraySum << endl; // Print the result

//     return 0;
// }

#include <iostream>
using namespace std;

int maxSum(int arr[], int n)
{
    int res = arr[0]; // Initialize the result and maxEnding variables with the first element of the array
    int maxEnding = arr[0];

    for (int i = 1; i < n; i++)
    {                                                // Start the loop from the second element of the array
        maxEnding = max(maxEnding + arr[i], arr[i]); // Calculate the maximum ending here or start a new subarray
        res = max(res, maxEnding);                   // Update the result with the maximum sum found so far
        cout << "Max Sum Ending at Index " << i << ": " << maxEnding << endl;
    }

    return res; // Return the maximum subarray sum
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);      // Calculate the size of the array

    int maxSubarraySum = maxSum(arr, n); // Call the maxSum function

    cout << "Maximum Subarray Sum: " << maxSubarraySum << endl; // Print the final result

    return 0;
}
