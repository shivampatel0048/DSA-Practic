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


// Explaination :-
// let's go through the code step by step:

// 1. The `findRepeating` function takes an integer array `arr[]` and its size `n` as parameters. It uses Floyd's Tortoise and Hare algorithm, also known as the cycle detection algorithm, to find the repeating element in the array efficiently.

// 2. Inside `findRepeating`:
//    - Two pointers, `slow` and `fast`, are initialized to the first element of the array `arr`.
//    - Using a do-while loop, the function moves `slow` one step forward and `fast` two steps forward in each iteration until they meet at a common point. This loop detects the point where the two pointers meet within a cycle in the array.
//    - Once the loop breaks, it indicates that the two pointers have met at a common point within the cycle.

// 3. After detecting the meeting point of the two pointers, the function resets the `slow` pointer to the first element of the array and moves both `slow` and `fast` pointers one step forward in each iteration until they meet again. This loop identifies the starting point of the cycle, which is the repeating element in the array.

// 4. The function returns the value of the repeating element found.

// 5. In the `main` function:
//    - An integer array `arr[]` is defined with some elements, including a repeating element.
//    - The size of the array `arr[]` is calculated using `sizeof(arr) / sizeof(arr[0])` and stored in `n`.
//    - The `findRepeating` function is called with the array `arr[]` and its size `n`.
//    - The repeating element returned by the `findRepeating` function is stored in the variable `repeatingElement`.
//    - Finally, the repeating element is printed out.

// 6. The output of the program confirms the repeating element found in the array.

// This algorithm efficiently finds the repeating element in an array with a time complexity of O(n) and a space complexity of O(1).

