#include <iostream>

using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    // Check if the array is already full
    if (n == cap)
    {
        cout << "Array is full. Cannot insert element." << endl;
        return n;
    }

    // Check if the position is valid
    if (pos < 1 || pos > n + 1)
    {
        cout << "Invalid position for insertion." << endl;
        return n;
    }

    int idx = pos - 1;

    // Shift elements to make space for the new element
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified position
    arr[idx] = x;

    // Increment the size of the array
    return (n + 1);
}

int main()
{
    const int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;

    // cout<<"sizeof(arr) : "<<sizeof(arr)<<endl;
    // cout<<"sizeof(arr[0]) : "<<sizeof(arr[0])<<endl;
    // cout << sizeof(arr)/sizeof(arr[0]); for size of array

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int elementToInsert = 99;
    int positionToInsert = 3;

    size = insert(arr, size, elementToInsert, capacity, positionToInsert);

    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
