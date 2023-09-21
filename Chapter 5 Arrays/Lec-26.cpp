#include <iostream>
using namespace std;

// Function to print groups of consecutive elements with the same value
void printGroup(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << "From " << i << " to "; // Start of a new group
            else
                cout << (i - 1) << endl; // End of the current group
        }
    }
    if (arr[n - 1] != arr[0])
        cout << (n - 1) << endl; // End of the last group
}

int main()
{
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0}; // Replace this with your binary array
    int n = sizeof(arr) / sizeof(arr[0]);

    printGroup(arr, n); // Call the printGroup function to find and print groups

    return 0;
}
