#include <iostream>
#include <climits>
using namespace std;

// // Function to find the maximum sum of a subarray of size k
// int maxSubarraySum(int arr[], int n, int k) {
//     int max_sum = INT_MIN; // Initialize max_sum to a very small value

//     // Loop through the array to find the maximum sum subarray of size k
//     for (int i = 0; i + k <= n; i++) {
//         int sum = 0; // Initialize sum for the current subarray
//         // Calculate the sum of the current subarray of size k
//         for (int j = 0; j < k; j++)
//             sum += arr[i + j];
//         // Update max_sum if the current subarray's sum is greater
//         max_sum = max(sum, max_sum);
//     }

//     return max_sum; // Return the maximum sum found
// }

// Another Aproach
int maxSubarraySum(int arr[], int n, int k)
{
    int curr_sum = 0; // Initialize a variable to keep track of the current sum of the first subarray
    for (int i = 0; i < k; i++)
        curr_sum += arr[i]; // Calculate the sum of the first subarray of size k

    int max_sum = curr_sum; // Initialize max_sum with the current sum as the initial maximum

    for (int i = k; i < n; i++)
    {
        curr_sum += (arr[i] - arr[i - k]); // Update the current sum by adding the next element and subtracting the first element of the previous subarray
        max_sum = max(max_sum, curr_sum);  // Update max_sum if the current sum is greater
    }

    return max_sum; // Return the maximum sum found
}

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the maxSubarraySum function to find the maximum sum
    int max_sum = maxSubarraySum(arr, n, k);

    // Print the maximum sum of a subarray of size k
    cout << "Maximum sum of a subarray of size " << k << " is: " << max_sum << endl;

    return 0;
}
