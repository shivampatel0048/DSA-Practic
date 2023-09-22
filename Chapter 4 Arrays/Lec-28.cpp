#include <iostream>
using namespace std;

// Function to calculate the sum of elements in a given range of an array.
int getSum(int arr[], int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum += arr[i]; // Add the value of the element at index 'i' to the sum.
    }
    return sum; // Return the calculated sum.
}

int main()
{
    int arr[] = {2, 8, 3, 9, 6, 5, 4}; // Initialize an integer array.

    // Calculate and print the sum of elements in specific ranges.
    cout << getSum(arr, 0, 2) << endl;
    cout << getSum(arr, 1, 3) << endl;
    cout << getSum(arr, 2, 6) << endl;

    return 0;
}
