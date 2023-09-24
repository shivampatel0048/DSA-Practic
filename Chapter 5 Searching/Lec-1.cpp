#include <iostream>
using namespace std;

// Function to perform linear search
// Time complexity : O(N)
int linearSearch(int arr[], int N, int X)
{
    for (int index = 0; index < N; index++)
    {
        // Compare X with the current element in arr[index]
        if (arr[index] == X)
        {
            return index; // Element found at index, return the index
        }
    }
    // Element not found in the array, return -1
    return -1;
}

// Function to perform Binary search
// Time complexity : O(log N)
int binarySearch(int arr[], int N, int X)
{
    // Initialize the low and high indices for the search range
    int low = 0;      // Start of the array
    int high = N - 1; // End of the array

    // Repeat the following until the search range is valid (low <= high)
    while (low <= high)
    {
        // Calculate the middle index of the current search range
        int mid = (low + high) / 2;

        // If the middle element is equal to X, we've found the element
        if (arr[mid] == X)
            return mid; // Return the index where X is found

        // If X is smaller than the middle element, search in the left half
        else if (arr[mid] > X)
            high = mid - 1;

        // If X is greater than the middle element, search in the right half
        else
            low = mid + 1;
    }

    // If the element is not found in the array, return -1
    return -1;
}

int binarySearchRecursive(int arr[], int low, int high, int x)
{
    // Base case: If the search range is invalid, the element is not found
    if (low > high)
    {
        return -1;
    }

    // Calculate the middle index of the current search range
    int mid = low + (high - low) / 2;

    // If the middle element is equal to x, return the index
    if (arr[mid] == x)
    {
        return mid;
    }
    // If x is smaller than the middle element, search in the left half
    else if (arr[mid] > x)
    {
        return binarySearchRecursive(arr, low, mid - 1, x);
    }
    // If x is greater than the middle element, search in the right half
    else
    {
        return binarySearchRecursive(arr, mid + 1, high, x);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 3;

    // Call the linearSearch function to search for X in arr
    // int result = linearSearch(arr, N, X);
    int result = binarySearch(arr, N, X);

    if (result != -1)
    {
        // Element found, so print the index where it was found
        cout << "Element " << X << " is found at index " << result << endl;
    }
    else
    {
        // Element not found, print a message indicating it's not in the array
        cout << "Element " << X << " is not found in the array." << endl;
    }

    return 0;
}
