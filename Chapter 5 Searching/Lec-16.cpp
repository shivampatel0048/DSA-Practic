#include <iostream>
using namespace std;

// Function to find the repeated element in the array
int findRepeatedElement(int arr[], int n)
{
    // Initialize two pointers, slow and fast, both pointing to the first element in the array
    int slow = arr[0];
    int fast = arr[0];

    // Phase 1: Detect if there's a cycle in the array
    do
    {
        // Move the slow pointer one step
        slow = arr[slow];

        // Move the fast pointer two steps
        fast = arr[arr[fast]];

    } while (slow != fast);

    // Reset the slow pointer to the beginning of the array
    slow = arr[0];

    // Phase 2: Find the starting point of the cycle (repeated element)
    while (slow != fast)
    {
        // Move both pointers one step at a time
        slow = arr[slow];
        fast = arr[fast];
    }

    // The repeated element is one less than the position where slow and fast met.
    return slow;
}

int main()
{
    int arr[] = {1, 3, 4, 2, 2}; // Example array with a repeated element
    int n = sizeof(arr) / sizeof(arr[0]);

    int repeatedElement = findRepeatedElement(arr, n);

    cout << "The repeated element is: " << repeatedElement << endl;

    return 0;
}
