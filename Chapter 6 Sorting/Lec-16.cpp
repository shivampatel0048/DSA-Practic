#include <iostream>
using namespace std;

// Naive Solution -> O(n*n)
int countInversion(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                res++;
        }
    }

    return res;
}

int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of inversions: " << countInversion(arr, n) << endl;

    return 0;
}
