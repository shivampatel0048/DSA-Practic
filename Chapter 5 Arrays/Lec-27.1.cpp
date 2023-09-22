#include <iostream>
using namespace std;

// Function to check if there exists a subarray with the given sum
bool isSubSum(int arr[], int n, int sum)
{
    int curr_sum = arr[0]; // Initialize curr_sum with the value of the first element
    int s = 0;             // Initialize s as the starting index of the window

    for (int i = 0; i < n; i++)
    {
        // Clear the previous window if curr_sum exceeds the desired sum
        while (curr_sum > sum && s < i - 1)
        {
            curr_sum -= arr[s];
            s++; // Move the starting index of the window to the right
        }

        if (curr_sum == sum)
            return true; // If curr_sum matches the desired sum, return true

        if (i < n - 1)
            curr_sum += arr[i + 1]; // Add the next element to the current window sum
    }

    return (curr_sum == sum); // Return true if the desired sum is found; otherwise, return false
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 33;

    // Call the isSubSum function to check if a subarray with the given sum exists
    bool found = isSubSum(arr, n, sum);

    if (found)
        cout << "A subarray with sum " << sum << " exists." << endl;
    else
        cout << "No subarray with sum " << sum << " exists." << endl;

    return 0;
}
