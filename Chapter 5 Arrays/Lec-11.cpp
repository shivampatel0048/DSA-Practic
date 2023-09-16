#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int size)
{
    if (size <= 1)
    {
        return size; // If the array has 0 or 1 elements, there are no duplicates to remove
    }

    int uniqueIndex = 0; // Index to track the last unique element

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            // If the current element is different from the next element,
            // increment the uniqueIndex and copy the next element to the uniqueIndex position.
            uniqueIndex++;
            arr[uniqueIndex] = arr[i + 1];
        }
    }

    // The size of the array without duplicates will be uniqueIndex + 1
    return uniqueIndex + 1;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
