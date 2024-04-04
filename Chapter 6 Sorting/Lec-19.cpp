#include <iostream>
using namespace std;

// Hoare's Partition Algorithm
int hoarePartition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low - 1, j = high + 1;

    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int pivotIndex = hoarePartition(arr, 0, n - 1); // Call hoarePartition function with the array and indices

    cout << "Partitioned Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Pivot Index: " << pivotIndex << endl;

    return 0;
}
