#include <iostream>
#include <algorithm>
using namespace std;

// STL -  The STL provides a range of containers, such as vectors, lists, and maps, as well as algorithms for searching, sorting and manipulating data.

int main()
{
    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) // or -> for (int i : arr)
    {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;

    sort(arr, arr + n); // Sort the array in ascending order using the sort function

    cout << "Sorted Array in Ascending Order: ";
    for (int i = 0; i < n; i++) // or -> for (int i : arr)
    {
        cout << arr[i] << " "; // Print each element in ascending order
    }
    cout << endl;

    sort(arr, arr + n, greater<int>()); // Sort the array in descending order using the sort function with greater<int>()

    cout << "Sorted Array in Descending Order: ";
    for (int i = 0; i < n; i++) // or -> for (int i : arr)
    {
        cout << arr[i] << " "; // Print each element in descending order
    }
    cout << endl;

    return 0;
}
