#include <iostream>
using namespace std;

// int findMajority(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//                 count++;
//             if (count > n / 2)
//                 return i;
//         }
//     }
//     return -1;
// }

// Another Aproach

// Function to find the majority element
int findMajority(int arr[], int size)
{
    int candidate = -1; // Initialize candidate
    int count = 0;      // Initialize count of the candidate

    // Step 1: Find a candidate for the majority element
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Step 2: Verify if the candidate is the majority element
    count = 0; // Reset count
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }

    // If the candidate occurs more than n/2 times, it is the majority element
    if (count > size / 2)
    {
        return candidate;
    }
    else
    {
        return -1; // No majority element found
    }
}

int main()
{
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int majority = findMajority(arr, size);

    if (majority != -1)
    {
        cout << "The majority element is: " << majority << endl;
    }
    else
    {
        cout << "No majority element found." << endl;
    }

    return 0;
}