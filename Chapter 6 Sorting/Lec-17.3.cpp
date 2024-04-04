// Hoare's Partition Algorithm in Quick Sort.


#include <iostream>
using namespace std;

// Hoare's Partition Algorithm
int hoarePartition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low - 1, j = high + 1;

    while (true) {
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(arr[i], arr[j]);
    }
}

// QuickSort using Hoare's Partition Algorithm
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = hoarePartition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {5, 13, 6, 9, 12, 11, 8}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
