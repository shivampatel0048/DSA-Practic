#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false; // Array is not sorted in increasing order
        }
    }
    return true; // Array is sorted in increasing order
}

int main()
{
    int arr[] = {12, 34, 56, 78, 90, 123};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size))
    {
        cout << "The array is sorted in increasing order." << endl;
    }
    else
    {
        cout << "The array is not sorted in increasing order." << endl;
    }

    return 0;
}
