// Q. Partition a given array

#include <iostream>
using namespace std;

// Naive solution
void partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;

    // Copy elements less than or equal to the pivot to temp
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    // Copy elements greater than the pivot to temp
    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[index] = arr[i];
            index++;
        }
    }

    // Copy elements from temp back to arr
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l]; // Adjust index to match temp array
    }
}

int main()
{
    int arr[] = {5, 13, 6, 9, 12, 11, 8}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int pivotIndex = 6; // Example pivot index

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    partition(arr, 0, n - 1, pivotIndex);

    cout << "Partitioned Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
