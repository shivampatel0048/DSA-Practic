#include <iostream>
using namespace std;

// Function to find the repeated element in the array
int findRepeatedElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    // If no repeated element is found, return -1
    return -1;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 5};          // Example array with a repeated element
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int repeatedElement = findRepeatedElement(arr, size); // Call the function to find the repeated element

    if (repeatedElement != -1)
    {
        // If a repeated element is found, print it
        cout << "The repeated element is: " << repeatedElement << endl;
    }
    else
    {
        // If no repeated element is found, print a message indicating so
        cout << "There is no repeated element in the array." << endl;
    }

    return 0;
}
