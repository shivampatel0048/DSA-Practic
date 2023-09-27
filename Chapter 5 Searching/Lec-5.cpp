#include <iostream>

using namespace std;

int countOccurrences(int arr[], int size, int x)
{
    int firstOccurrence = -1; // Initialize variables to store the first and last occurrence indices
    int lastOccurrence = -1;

    // Find the first occurrence of x using binary search
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            firstOccurrence = mid; // Update the first occurrence index
            high = mid - 1;        // Search in the left half to find the first occurrence
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Find the last occurrence of x using binary search
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            lastOccurrence = mid; // Update the last occurrence index
            low = mid + 1;        // Search in the right half to find the last occurrence
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Calculate the count of occurrences
    if (firstOccurrence != -1 && lastOccurrence != -1)
    {
        return lastOccurrence - firstOccurrence + 1;
    }
    else
    {
        return 0; // Element not found
    }
}

int main()
{
    int arr[] = {1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2;

    int count = countOccurrences(arr, size, x);

    if (count > 0)
    {
        cout << "The element " << x << " occurs " << count << " times in the array." << endl;
    }
    else
    {
        cout << "The element " << x << " is not found in the array." << endl;
    }

    return 0;
}
