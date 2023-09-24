#include <iostream>
using namespace std;

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
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    int x = 4; // Element to search for

    // Call the binarySearchRecursive function
    int result = binarySearchRecursive(arr, 0, N - 1, x);

    if (result != -1)
    {
        // Element found, so print its index
        cout << "Element " << x << " is found at index " << result << endl;
    }
    else
    {
        // Element not found, print a message indicating it's not in the array
        cout << "Element " << x << " is not found in the array." << endl;
    }

    return 0;
}