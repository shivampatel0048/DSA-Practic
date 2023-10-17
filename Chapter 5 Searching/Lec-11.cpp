#include <iostream>
using namespace std;

// Function to find a pair in the given sorted array that sums up to the targetSum
void findPairWithSum(int arr[], int size, int targetSum)
{
    int left = 0;         // Initialize the left pointer to the beginning of the array
    int right = size - 1; // Initialize the right pointer to the end of the array

    while (left < right)
    {                                            // Continue as long as the left pointer is less than the right pointer
        int currentSum = arr[left] + arr[right]; // Calculate the sum of the current pair

        if (currentSum == targetSum)
        {
            // If the current pair sums up to the targetSum, print the pair and return
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return;
        }
        else if (currentSum > targetSum)
        {
            // If the current pair's sum is greater than the targetSum, move the right pointer to reduce the sum
            right--;
        }
        else
        {
            // If the current pair's sum is less than the targetSum, move the left pointer to increase the sum
            left++;
        }
    }

    // If the loop completes and no such pair is found, print a message indicating that
    cout << "No such pair found." << endl;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 11, 15};
    int targetSum = 9;
    int size = sizeof(arr) / sizeof(arr[0]);

    findPairWithSum(arr, size, targetSum);

    return 0;
}

// Another Aproach
//  int main()
//  {
//      int arr[] = {1, 3, 5, 7, 9, 11};
//      int target = 10;
//      int n = sizeof(arr) / sizeof(arr[0]);

//     bool found = false;
//     int a = 0;

//     for (int i = 0; i < n - 1; i++)
//     {
//         a = i;
//     }

//     for (int j = 0; j < n; j++)
//     {
//         if (arr[a] + arr[j] == target)
//         {
//             cout << "Pair found: " << arr[a] << " and " << arr[j] << endl;
//             found = true;
//             break;
//         }
//     }

//     if (!found)
//     {
//         cout << "No pair found with the given sum." << endl;
//     }

//     return 0;
// }
