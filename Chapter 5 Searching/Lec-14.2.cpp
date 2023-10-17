#include <iostream>
using namespace std;

// Function to find the majority element in the array.
int findMajorityElement(int arr[], int n)
{
    int res = 0, count = 1;

    // Phase 1: Finding a potential majority candidate
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;  // Increase the count if the current element is the same as the candidate.
        else
            count--;  // Decrease the count if the current element is different from the candidate.

        if (count == 0)
        {
            res = i;   // Update the potential candidate when the count becomes zero.
            count = 1; // Reset the count to 1.
        }
    }

    count = 0;

    // Phase 2: Verifying if the potential candidate is a majority element
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;  // Count the occurrences of the potential candidate.
    }

    // If the count of the potential candidate is less than or equal to half of the array size,
    // then it's not a majority element, so we return -1 to indicate no majority element found.
    if (count <= n / 2)
    {
        res = -1;
    }

    return res; // Return the index of the majority element (or -1 if not found).
}

int main()
{
    int arr[] = {2, 2, 3, 4, 2, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, n);

    if (majorityElement != -1)
    {
        cout << "The index of the majority element is: " << majorityElement << endl;
    }
    else
    {
        cout << "No majority element found in the array." << endl;
    }

    return 0;
}
