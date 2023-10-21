#include <iostream>
#include <climits>

using namespace std;

// Function to find the median of two sorted arrays
double findMedianSortedArrays(int arr1[], int m, int arr2[], int n)
{
    if (m > n)
    {
        swap(arr1, arr2);
        swap(m, n);
    }

    int low = 0, high = m;

    while (low <= high)
    {
        int partition1 = (low + high) / 2;
        int partition2 = (m + n + 1) / 2 - partition1;

        int maxX = (partition1 == 0) ? INT_MIN : arr1[partition1 - 1];
        int maxY = (partition2 == 0) ? INT_MIN : arr2[partition2 - 1];

        int minX = (partition1 == m) ? INT_MAX : arr1[partition1];
        int minY = (partition2 == n) ? INT_MAX : arr2[partition2];

        if (maxX <= minY && maxY <= minX)
        {
            if ((m + n) % 2 == 0)
            {
                return (max(maxX, maxY) + min(minX, minY)) / 2.0;
            }
            else
            {
                return max(maxX, maxY);
            }
        }
        else if (maxX > minY)
        {
            high = partition1 - 1;
        }
        else
        {
            low = partition1 + 1;
        }
    }

    throw invalid_argument("Input arrays are not sorted.");
}

int main()
{
    int arr1[] = {1, 3};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2};
    int n = sizeof(arr2) / sizeof(arr2[0]);

    double median = findMedianSortedArrays(arr1, m, arr2, n);
    cout << "Median: " << median << endl;

    return 0;
}
