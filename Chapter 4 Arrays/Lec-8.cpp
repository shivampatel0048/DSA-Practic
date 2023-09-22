#include <iostream>
using namespace std;

int findLargestElement(int arr[], int size)
{
    int res = 0;
    for (int i = 1; i < size; i++) // Theeta(n)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

// int findSecondLargestElement(int arr[], int size)
// {
//     int largest = findLargestElement(arr, size);
//     int res = -1;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] != arr[largest])
//         {
//             if (res == -1)
//                 res = i;
//             else if (arr[i] > arr[res])
//                 res = i;
//         }
//     }
//     return res;
// }

int findSecondLargestElement(int arr[], int size) // efficient methode
{
    int res = -1, largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
                res = i;
        }
    }
    return res;
}

int main()
{
    int arr[] = {12, 34, 56, 78, 90, 23, 45};
    int size = sizeof(arr) / sizeof(arr[0]);

    int SecondLargest = findSecondLargestElement(arr, size);
    cout << "Second Largest index = " << SecondLargest << "\nSecond Largest value = " << arr[SecondLargest];

    return 0;
}
