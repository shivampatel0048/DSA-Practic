#include <iostream>
using namespace std;

int countOnes(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == 0)
        {
            left = mid + 1;
        }
        else
        {
            // If the current element is 1, it's a potential 1 in the array.
            // We need to check if it's the first occurrence of 1 in the sorted array.
            // If the element to the left of it is also 1, we move to the left half;
            // otherwise, we've found the first occurrence of 1, and we can break the loop.
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return n - mid; // Number of 1s in the array
            }
            else
            {
                right = mid - 1;
            }
        }
    }

    return 0; // No 1s found in the array
}

int countOnesRecursive(int arr[], int left, int right) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == 1) {
            // If the current element is 1, it's a potential 1 in the array.
            // We need to check if it's the first occurrence of 1 in the sorted array.
            // If the element to the left of it is also 1, we move to the left half;
            // otherwise, we've found the first occurrence of 1.
            if (mid == 0 || arr[mid - 1] == 0) {
                return (right - mid + 1) + countOnesRecursive(arr, left, mid - 1);
            } else {
                return countOnesRecursive(arr, left, mid - 1);
            }
        } else {
            // If the current element is 0, move to the right half.
            return countOnesRecursive(arr, mid + 1, right);
        }
    }

    return 0; // Base case: No 1s found in the array
}

int main()
{
    int arr[] = {0, 0, 0, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // int onesCount = countOnes(arr, n);
    int onesCount = countOnesRecursive(arr, 0, n - 1);

    cout << "Number of 1s in the sorted binary array: " << onesCount << endl;

    return 0;
}
