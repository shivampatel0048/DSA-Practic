#include <iostream>
using namespace std;

// Function to find the repeating element in the array
int findRepeating(int arr[], int n)
{
    // Initialize slow and fast pointers with arr[0] + 1
    int slow = arr[0] + 1, fast = arr[0] + 1;

    // Move slow and fast pointers to detect the meeting point within the cycle
    do
    {
        slow = arr[slow] + 1;          // Move slow one step forward
        fast = arr[arr[fast] + 1] + 1; // Move fast two steps forward
    } while (slow != fast);            // Continue until slow and fast pointers meet

    // Reset slow to arr[0] + 1 and find the starting point of the cycle
    slow = arr[0] + 1;
    while (slow != fast)
    {
        slow = arr[slow] + 1; // Move slow one step forward
        fast = arr[fast] + 1; // Move fast one step forward
    }

    // Return the repeating element (subtract 1 to get the actual element)
    return slow - 1;
}

// Main function
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 3}; // Sample array with a repeating element
    int n = sizeof(arr) / sizeof(arr[0]);

    // Call the findRepeating function to find the repeating element
    int repeatingElement = findRepeating(arr, n);

    // Print the repeating element found
    cout << "Repeating element is: " << repeatingElement << endl;

    return 0;
}
