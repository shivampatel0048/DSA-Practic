#include <iostream>
using namespace std;

void findLeaders(int arr[], int n)
{
    int maxElement = arr[n - 1]; // Initialize the maximum element as the last element
    cout << "Leaders in the array: " << maxElement << " ";

    // Start from the second-to-last element and move towards the first element
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= maxElement)
        {
            maxElement = arr[i];
            cout << maxElement << " ";
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    findLeaders(arr, n);

    return 0;
}
