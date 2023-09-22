#include <iostream>
using namespace std;

// Function to calculate the sum of elements in a given range of an array using a prefix sum array.
int getSum(int prefixSum[], int start, int end)
{
    if (start == 0)
        return prefixSum[end];
    else
        return prefixSum[end] - prefixSum[start - 1];
}

int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4}; // Initialize an integer array.

    // Create a prefix sum array to store cumulative sums.
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];

    // Calculate the prefix sum and populate the prefixSum array.
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    // Calculate and print the sum of elements in specific ranges.
    cout << getSum(prefixSum, 0, 2) << endl; // Sum of elements from index 0 to 2: 2 + 8 + 3 = 13
    cout << getSum(prefixSum, 1, 3) << endl; // Sum of elements from index 1 to 3: 8 + 3 + 9 = 20
    cout << getSum(prefixSum, 2, 6) << endl; // Sum of elements from index 2 to 6: 3 + 9 + 6 + 5 + 4 = 27

    return 0;
}
