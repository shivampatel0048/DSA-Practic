// Lomuto partition Algorithm

#include <iostream>
using namespace std;

// Lomuto partition function
int lomutoPartition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Index of smaller element

    for (int j = low; j < high; j++)
    {
        // If current element is smaller than or equal to the pivot
        if (arr[j] <= pivot)
        {
            i++;                  // Increment index of smaller element
            swap(arr[i], arr[j]); // Swap arr[i] and arr[j]
        }
    }
    swap(arr[i + 1], arr[high]); // Swap arr[i + 1] and arr[high], placing pivot in correct position
    return i + 1;                // Return the index of pivot element
}

int main()
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pivotIndex = lomutoPartition(arr, 0, n - 1);

    cout << "Partitioned Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Pivot Index: " << pivotIndex << endl;

    return 0;
}
