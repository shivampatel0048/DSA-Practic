#include <iostream>
using namespace std;

// int findLargestElement(int arr[], int size)  // O(n2)
// {
//     for (int i = 0; i < size; i++)
//     {
//         bool flag = true;
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false;
//                 break;
//             }
//         }
//         if (flag == true)
//         {
//             return i;
//         }
//     }

//     return -1;
// }

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

int main()
{
    int arr[] = {12, 34, 56, 78, 90, 23, 45};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargestElement(arr, size);
    cout<<"Largest index = "<<largest<<"\nLargest value = "<<arr[largest];


    return 0;
}
