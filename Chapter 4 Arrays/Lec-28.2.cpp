#include <iostream>
using namespace std;

// Function to check if there exists a point in the array where left sum equals right sum.
bool isEqPoint(int arr[], int n)
{
    int sum = 0;

    // Calculate the sum of all elements in the array.
    for (int i = 0; i < n; i++)
        sum += arr[i];

    int l_sum = 0;

    // Iterate through the array to find the equilibrium point.
    for (int i = 0; i < n; i++)
    {
        if (l_sum == (sum - arr[i]))
            return true; // Equilibrium point found.

        l_sum += arr[i];
        sum -= arr[i];
    }

    return false; // No equilibrium point found.
}

int main()
{
    int arr[] = {3, 4, 8, -9, 20, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isEqPoint(arr, n))
        cout << "Yes" << endl; // There is an equilibrium point in the array.

    else
        cout << "No" << endl; // There is no equilibrium point in the array.

    return 0;
}
