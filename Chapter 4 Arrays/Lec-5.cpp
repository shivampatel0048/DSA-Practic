#include <iostream>
using namespace std;

// Operation in Array Part - 1

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
        return n;
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
        arr[idx] = x;
        return (n + 1);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; // Declare an integer array of size n

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Input elements into the array
    }

    int x;
    cout << "Enter the element to search for: ";
    cin >> x;

    int result = search(arr, n, x);

    if (result != -1)
    {
        cout << "Element " << x << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << x << " not found in the array." << endl;
    }
    return 0;
}