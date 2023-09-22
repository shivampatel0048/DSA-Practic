#include <iostream>
using namespace std;

// Function to count the number of subsets with a given sum
int countSubsetsWithSum(int arr[], int n, int sum)
{
    // Base case: If there are no elements in the array
    // and the desired sum is also 0, return 1, else return 0.
    if (n == 0)
    {
        return (sum == 0) ? 1 : 0;
    }

    // Recursive case:
    // 1. Exclude the last element and count subsets without it.
    // 2. Include the last element and count subsets with it.
    return countSubsetsWithSum(arr, n - 1, sum) + countSubsetsWithSum(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int targetSum;
    cout << "Enter the target sum: ";
    cin >> targetSum;

    int result = countSubsetsWithSum(arr, n, targetSum);
    cout << "Number of subsets with sum " << targetSum << " is: " << result << endl;

    return 0;
}
