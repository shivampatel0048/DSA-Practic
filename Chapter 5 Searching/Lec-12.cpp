#include <iostream>
using namespace std;

// Function to find triplets in the given array that sum to the target value
void findTriplets(int arr[], int n, int target)
{
    // Iterate through the array, leaving space for the last two elements as triplets are considered
    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1;  // Initialize the left pointer to the next element
        int right = n - 1; // Initialize the right pointer to the last element

        while (left < right)
        {                                              // Continue as long as the left pointer is less than the right pointer
            int sum = arr[i] + arr[left] + arr[right]; // Calculate the sum of current elements

            if (sum == target)
            {
                // If the sum matches the target, print the triplet and move the pointers
                cout << "Triplet found: " << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
                left++;
                right--;
            }
            else if (sum < target)
            {
                // If the sum is less than the target, increment the left pointer to increase the sum
                left++;
            }
            else
            {
                // If the sum is greater than the target, decrement the right pointer to decrease the sum
                right--;
            }
        }
    }
}

// Another Aproach for Unsorted Array
void findTriplets(int arr[], int n, int target) {
    for (int i = 0; i < n - 2; ++i) {
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) {
            int currentSum = arr[i] + arr[left] + arr[right];
            
            if (currentSum == target) {
                cout << "Triplet: " << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
                ++left;
                --right;
            } else if (currentSum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    findTriplets(arr, n, target);

    return 0;
}
