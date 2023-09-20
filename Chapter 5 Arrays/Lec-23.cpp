#include <iostream>
using namespace std;

int maxEvenOddSubarrayLength(int arr[], int n)
{
    int maxLength = 1;     // Initialize the maximum length to 1
    int currentLength = 1; // Initialize the current length to 1

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            // If the current element and the previous element have opposite parity
            currentLength++; // Increment the current length
        }
        else
        {
            maxLength = max(maxLength, currentLength); // Update maxLength with the maximum of maxLength and currentLength
            currentLength = 1;                         // Reset the current length
        }
    }

    return max(maxLength, currentLength); // Return the maximum of maxLength and the final currentLength
}

int main()
{
    int arr[] = {5, 10, 20, 6, 4, 8};     // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int maxSubarrayLength = maxEvenOddSubarrayLength(arr, n); // Call the function

    cout << "Maximum Even-Odd Subarray Length: " << maxSubarrayLength << endl; // Print the result

    return 0;
}
