#include <iostream>
using namespace std;

// Function to search for an element in an "infinite" sorted array
// int search(int arr[], int x)
// {
//     int i = 0;

//     // Assume a stopping condition when the array size exceeds a limit (e.g., 10^6)
//     while (true)
//     {
//         if (arr[i] == x)
//         {
//             return i;
//         }
//         if (arr[i] > x)
//         {
//             return -1;
//         }
//         // Double the index for the next iteration
//         i *= 2;
//     }

//     // If we reach this point, the element was not found within the assumed limit.
//     return -1;
// }

// Another aproach
// int search(int arr[], int x)
// {
//     int i = 0;
//     while (true)
//     {
//         if (arr[i] == x)
//         {
//             return i;
//         }
//         if (arr[i] > x)
//         {
//             return -1;
//         }
//         i++;
//     }
// }

// Another aproach (This is call unbounded binary search methode)
int binarySearch(int arr[], int x, int left, int right)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2; // Calculate the middle index of the search range.

        if (arr[mid] == x)
        {
            return mid; // Element found, return its index.
        }
        else if (arr[mid] < x)
        {
            left = mid + 1; // If the middle element is less than x, search in the right half.
        }
        else
        {
            right = mid - 1; // If the middle element is greater than x, search in the left half.
        }
    }

    return -1; // Element not found in the specified range.
}

int search(int arr[], int x)
{
    if (arr[0] == x)
        return 0; // Check if the first element of the array is equal to x.

    int i = 1; // Start at index 1

    // Use a loop to determine an appropriate 'i' such that arr[i] is either equal to or greater than 'x'.
    while (arr[i] < x)
        i *= 2; // Double the index 'i' to expand the search range exponentially.

    if (arr[i] == x)
        return i; // If 'x' is found at index 'i', return 'i'.

    // If 'x' is not found within the range (i/2 + 1) to (i - 1), perform a binary search.
    return binarySearch(arr, x, ((i / 2) + 1), (i - 1));
}

int main()
{
    // Example usage
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30};
    int x = 16;

    int result = search(arr, x);

    if (result != -1)
    {
        cout << "Element " << x << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << x << " not found in the array." << endl;
    }

    return 0;
}
