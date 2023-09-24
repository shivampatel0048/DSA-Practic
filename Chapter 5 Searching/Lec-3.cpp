#include <iostream>
using namespace std;

// Index of first Occurrence
int fristOcc(int arr[], int N, int X)
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


// Time complexity : O(log N)
int fristOcc(int arr[], int low, int high, int x)
{
    // Base case: If the search range is invalid, the element is not found
    if (low > high)
    {
        return -1;
    }

    // Calculate the middle index of the current search range
    int mid = low + (high - low) / 2;

    // If the middle element is equal to x, return the index
    if (arr[mid] < x)
    {
        return fristOcc(arr, mid + 1, high, x);
        ;
    }
    // If x is smaller than the middle element, search in the left half
    else if (arr[mid] > x)
    {
        return fristOcc(arr, low, mid - 1, x);
    }
    // If x is greater than the middle element, search in the right half
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
            return mid;
        else
            return fristOcc(arr, low, mid - 1, x);
    }
}

int main()
{
    int arr[] = {5, 10, 10, 15, 15, 15, 20, 20, 20};
    int N = sizeof(arr) / sizeof(arr[0]);
    int X = 15;

    // Call the linearSearch function to search for X in arr
    // int result = fristOcc(arr, N, X);
    int result = fristOcc(arr, 0, N - 1, X);

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
