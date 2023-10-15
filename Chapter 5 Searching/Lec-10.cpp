#include <iostream>
using namespace std;

// Function to search for an element 'x' in a rotated sorted array 'arr'
int getAPeak(int arr[], int n)
{
    int low = 0, high = n - 1;

    // Start a while loop for binary search
    while (low <= high)
    {
        // Calculate the middle index
        int mid = (low + high) / 2;
        if ((arr[mid] == 0 || arr[mid - 1] <= arr[mid]) && mid == n - 1 || arr[mid + 1] <= arr[mid])
            return mid;
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    // Example usage
    int arr[] = {5, 10, 20, 40, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the search function and store the result
    int result = getAPeak(arr, n);
    cout << "The Peak Number is : " << arr[result];

    return 0;
}