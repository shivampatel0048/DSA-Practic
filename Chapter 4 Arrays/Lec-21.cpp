#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int nums[], int n)
{
    int maxCount = 0;     // Variable to store the maximum consecutive ones count
    int currentCount = 0; // Variable to store the current consecutive ones count

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            currentCount++; // Increment the current count if the current element is 1
        }
        else
        {
            maxCount = max(maxCount, currentCount); // Update maxCount if currentCount is greater
            currentCount = 0;                       // Reset currentCount when encountering 0
        }
    }

    // Check one more time after the loop in case the sequence ends with consecutive ones
    maxCount = max(maxCount, currentCount);

    return maxCount;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1}; // Example binary array
    int n = sizeof(arr) / sizeof(arr[0]);       // Calculate the size of the array

    int maxConsecutiveOnes = findMaxConsecutiveOnes(arr, n); // Call the function

    cout << "Maximum Consecutive 1's: " << maxConsecutiveOnes << endl; // Print the result

    return 0;
}
