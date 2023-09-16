#include <iostream>

using namespace std;

int remove(int arr[], int n, int x)
{
    bool found = false;

    // Find the index of the element to remove
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
            found = true;
            break;
        }
    }

    // If the element was not found, return the current size
    if (!found)
    {
        cout << "Element " << x << " not found. Nothing to delete." << endl;
        return n;
    }

    // Shift elements to remove the found element
    for (int i = idx; i < n - 1; i++)
    {
        cout<<arr[i]<<" = "<<arr[i+1]<<endl;
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    return (n - 1);
}

int main()
{
    const int capacity = 10;
    int arr[capacity] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // int elementToDelete = 4;
    int elementToDelete;
    cout<<"Which element you want to delete : ";
    cin>>elementToDelete;

    size = remove(arr, size, elementToDelete);

    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
