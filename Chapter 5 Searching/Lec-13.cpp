#include <iostream>
using namespace std;

// Function to find the median of two sorted arrays
double findMedianSortedArrays(int arr1[], int m, int arr2[], int n)
{
    if (m > n)
    {
        // Ensure arr1 is the smaller array to simplify the logic.
        swap(arr1, arr2);
        swap(m, n);
    }

    int iMin = 0, iMax = m;
    int halfLen = (m + n + 1) / 2; // Calculate the length of the left part.

    while (iMin <= iMax)
    {
        int i = (iMin + iMax) / 2; // Binary search on the smaller array.

        int j = halfLen - i; // Calculate the corresponding index in the second array.

        if (i < m && arr2[j - 1] > arr1[i])
        {
            // Increase i to move to the right part of arr1.
            iMin = i + 1;
        }
        else if (i > 0 && arr1[i - 1] > arr2[j])
        {
            // Decrease i to move to the left part of arr1.
            iMax = i - 1;
        }
        else
        {
            // Found the correct partition. Calculate the median.
            int maxLeft;
            if (i == 0)
            {
                maxLeft = arr2[j - 1];
            }
            else if (j == 0)
            {
                maxLeft = arr1[i - 1];
            }
            else
            {
                maxLeft = max(arr1[i - 1], arr2[j - 1]);
            }

            if ((m + n) % 2 == 1)
            {
                return maxLeft; // If total length is odd, return the max of left part.
            }

            int minRight;
            if (i == m)
            {
                minRight = arr2[j];
            }
            else if (j == n)
            {
                minRight = arr1[i];
            }
            else
            {
                minRight = min(arr1[i], arr2[j]);
            }

            return (maxLeft + minRight) / 2.0; // If total length is even, return the average of maxLeft and minRight.
        }
    }

    // If no solution is found, return 0.
    return 0.0;
}

int main()
{
    int arr1[] = {1, 3};
    int m = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    double median = findMedianSortedArrays(arr1, m, arr2, n);

    cout << "Median of the two sorted arrays: " << median << endl;

    return 0;
}
