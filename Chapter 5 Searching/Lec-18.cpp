#include <iostream>
using namespace std;

// Function to check if it's possible to allocate pages with a given minimum page count
bool isPossible(int arr[], int n, int m, int minPages)
{
    int students = 1;  // Initialize the number of students.
    int pagesRead = 0; // Initialize the total pages read.

    for (int i = 0; i < n; i++)
    {
        if (pagesRead + arr[i] > minPages)
        {
            students++;         // Increment the student count.
            pagesRead = arr[i]; // Reset pagesRead for the current student.
            if (students > m)
            {
                return false; // If the student count exceeds the given number, it's not possible.
            }
        }
        else
        {
            pagesRead += arr[i]; // Accumulate pages read by the current student.
        }
    }

    return true; // If all students can be allocated books within the given page limit, return true.
}

// Function to allocate the minimum number of pages
int allocateMinimumPages(int arr[], int n, int m)
{
    if (n < m)
    {
        return -1; // It's not possible to allocate pages if students are more than books.
    }

    int low = 0;  // Initialize the minimum possible page count.
    int high = 0; // Initialize the maximum possible page count.

    for (int i = 0; i < n; i++)
    {
        high += arr[i]; // Calculate the total pages in all books.
    }

    int result = -1; // Initialize the result variable.

    while (low <= high)
    {
        int mid = (low + high) / 2; // Calculate the middle page count.

        if (isPossible(arr, n, m, mid))
        {
            result = mid;   // Update the result if allocation is possible with mid pages.
            high = mid - 1; // Adjust the upper bound for the binary search.
        }
        else
        {
            low = mid + 1; // Adjust the lower bound for the binary search.
        }
    }

    return result; // Return the minimum possible page count for allocation.
}

int main()
{
    int arr[] = {12, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array.
    int m = 2;                            // Number of students

    int minPages = allocateMinimumPages(arr, n, m); // Find the minimum pages needed.

    cout << "Minimum pages to allocate: " << minPages << endl; // Print the result.

    return 0;
}
