#include <iostream>
#include <climits> 
using namespace std;

void selectionSort(int arr[], int n)
{
    int tempArr[n]; // Create a temporary array to hold sorted values.

    for (int i = 0; i < n; i++)
    {
        int minIndex = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        tempArr[i] = arr[minIndex]; // Place the minimum value in the temporary array.
        arr[minIndex] = INT_MAX;    // Set the minimum value in the original array to INT_MAX.
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = tempArr[i]; // Copy the sorted values from the temporary array back to the original array.
    }
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n); 

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
