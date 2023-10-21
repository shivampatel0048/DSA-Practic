#include <iostream>
#include <cmath>

using namespace std;

double findMedian(int arr1[], int n1, int arr2[], int n2)
{
    int totalSize = n1 + n2;
    int mergedArray[totalSize];

    // Merge the two arrays into a single sorted array
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            mergedArray[k++] = arr1[i++];
        }
        else
        {
            mergedArray[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        mergedArray[k++] = arr1[i++];
    }

    while (j < n2)
    {
        mergedArray[k++] = arr2[j++];
    }

    // Calculate the median based on the merged array
    if (totalSize % 2 == 0)
    {
        // If the total number of elements is even, return the average of the two middle elements
        int middle1 = mergedArray[totalSize / 2 - 1];
        int middle2 = mergedArray[totalSize / 2];
        return (double)(middle1 + middle2) / 2.0;
    }
    else
    {
        // If the total number of elements is odd, return the middle element
        return (double)mergedArray[totalSize / 2];
    }
}

int main()
{
    int arr1[] = {2, 4, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {1, 3, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    double median = findMedian(arr1, n1, arr2, n2);

    cout << "Median of the two arrays: " << median << " or " << floor(median) << endl;

    return 0;
}
