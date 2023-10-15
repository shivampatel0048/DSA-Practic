#include <iostream>
using namespace std;

// Function to search for an element 'x' in a rotated sorted array 'arr'
int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    // Start a while loop for binary search
    while (low <= high)
    {
        // Calculate the middle index
        int mid = (low + high) / 2;

        // If the middle element is equal to 'x', we found the element, so return its index
        if (arr[mid] == x)
            return mid;

        // Check if the left half of the array is sorted (arr[low] to arr[mid])
        if (arr[low] < arr[mid])
        {
            // If 'x' is within the sorted left half, update 'high' to search in the left half
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            // Otherwise, update 'low' to search in the right half
            else
                low = mid + 1;
        }
        // If the left half is not sorted, the right half must be sorted
        else
        {
            // If 'x' is within the sorted right half, update 'low' to search in the right half
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            // Otherwise, update 'high' to search in the left half
            else
                high = mid - 1;
        }
    }

    // If the element is not found in the array, return -1
    return -1;
}

int main()
{
    // Example usage
    int arr[] = {12, 14, 16, 18, 20, 2, 4, 6, 8, 10, 22, 24, 26, 28, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Element to search for
    int x = 22;

    // Call the search function and store the result
    int result = search(arr, n, x);

    // Check if the result is not -1 (element found) and display the index
    if (result != -1)
    {
        cout << "Element " << x << " found at index " << result << endl;
    }
    // If the result is -1, indicate that the element was not found in the array
    else
    {
        cout << "Element " << x << " not found in the array." << endl;
    }

    return 0;
}
