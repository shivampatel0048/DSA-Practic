#include <iostream>
using namespace std;

void moveZerosToEnd(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // If the current element is non-zero, find the first zero element after it
        if (arr[i] != 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] == 0)
                {
                    // Swap the non-zero element with the first zero element found
                    swap(arr[i], arr[j]);
                    break; // Move to the next non-zero element
                }
            }
        }
    }
}

int main()
{
    int arr[] = {0, 2, 0, 3, 0, 4, 5, 0, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    moveZerosToEnd(arr, n);

    cout << "\nArray After Moving Zeros to End: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// #include <iostream>
// using namespace std;

// void moveZerosToEnd(int arr[], int n)
// {
//     int nonZeroIndex = 0;

//     // Iterate through the array
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             // If the current element is non-zero, move it to the next non-zero position
//             arr[nonZeroIndex] = arr[i];
//             if (i != nonZeroIndex)
//             {
//                 arr[i] = 0; // Set the original position to zero
//             }
//             nonZeroIndex++;
//         }
//     }
// }

// int main()
// {
//     int arr[] = {0, 2, 0, 3, 0, 4, 5, 0, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     moveZerosToEnd(arr, n);

//     cout << "\nArray After Moving Zeros to End: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
