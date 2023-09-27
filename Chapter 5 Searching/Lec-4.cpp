#include <iostream>
using namespace std;

// Index of last Occurrence
int lastOccurrence2(int arr[], int low, int high, int x)
{
    // Base case: If the search range is invalid, the element is not found
    if (low > high)
    {
        return -1;
    }

    // Calculate the middle index of the current search range
    int mid = low + (high - low) / 2;

    // If the middle element is equal to x, we have a potential last occurrence
    if (arr[mid] == x)
    {
        // Check if this is the last occurrence of x
        if (mid == high || arr[mid + 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            // If not the last occurrence, search in the right half
            return lastOccurrence(arr, mid + 1, high, x);
        }
    }
    // If x is smaller than the middle element, search in the left half
    else if (arr[mid] > x)
    {
        return lastOccurrence(arr, low, mid - 1, x);
    }
    // If x is greater than the middle element, search in the right half
    else
    {
        return lastOccurrence(arr, mid + 1, high, x);
    }
}

// An iterative approach
int lastOccurrence(int arr[], int low, int high, int x)
{
    int result = -1; // Initialize the result to -1

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            result = mid; // Update the result to the current index

            // Continue searching in the right half to find the last occurrence
            low = mid + 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1; // Search in the left half
        }
        else
        {
            low = mid + 1; // Search in the right half
        }
    }

    return result;
}

// Another iterative approach
int lastOccurrence(int arr[], int N, int X)
{
    for (int index = N - 1; index >= 0; index--)
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

int main()
{
    int arr[] = {5, 10, 10, 15, 15, 15, 20, 20, 20};
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 20;

    // Call the linearSearch function to search for X in arr
    int result = lastOccurrence(arr, N, X);
    // int result = lastOccurrence(arr, 0, N - 1, X);

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
