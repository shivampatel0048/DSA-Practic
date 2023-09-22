#include <iostream>
using namespace std;

// Function to left rotate an array by d elements
void leftRotate(int arr[], int n, int d)
{
    // Create a temporary array to store the rotated elements
    int temp[d];

    // Copy the first d elements to the temporary array
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    // Shift the remaining elements to the left by d positions
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    // Copy the elements from the temporary array back to the original array
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

int main()
{
    int n, d;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to left rotate: ";
    cin >> d;

    // Perform left rotation
    leftRotate(arr, n, d);

    cout << "Array after left rotation by " << d << " positions: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}