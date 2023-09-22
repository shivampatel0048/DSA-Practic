#include <iostream>
using namespace std;

// Find Two odd appearing number

int main()
{
    // Time Complexity => O(n²)
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            cout << arr[i]<<" ";
        }
    }
    return 0;
}