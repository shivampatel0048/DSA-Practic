#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n)
{
    // Store the first element in a temporary variable
    int temp = arr[0];

    // Shift all elements one position to the left
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Assign the value of the temporary variable to the last element
    arr[n - 1] = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    leftRotateByOne(arr, n);

    cout << "\nArray after left rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
