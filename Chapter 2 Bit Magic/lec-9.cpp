#include <iostream>
using namespace std;

// Find the only odd occuring number

int main()
{
    int arr[] = {4, 4, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << n;
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
            cout << arr[i] << " ";
        }
    }
    return 0;
}