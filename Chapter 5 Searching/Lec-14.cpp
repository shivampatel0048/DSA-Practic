#include <iostream>
using namespace std;

int findMajorityElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > size / 2)
        {
            return i;
        }
    }
    return -1; // No majority element found
}

int main()
{
    int arr[] = {2, 2, 3, 4, 2, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int majorityElement = findMajorityElement(arr, size);

    if (majorityElement != -1)
    {
        cout << "The majority element is: " << majorityElement << endl;
    }
    else
    {
        cout << "No majority element found in the array." << endl;
    }

    return 0;
}
