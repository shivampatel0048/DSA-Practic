#include <iostream>
using namespace std;

void findFrequency(int arr[], int n)
{
    if (n <= 0)
    {
        cout << "Array is empty." << endl;
        return;
    }

    int currentElement = arr[0];
    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == currentElement)
        {
            // If the current element is the same as the previous one, increment the count.
            count++;
        }
        else
        {
            // If a new element is encountered, print the frequency of the previous element and reset the count.
            cout << "Element " << currentElement << ": " << count << " times" << endl;
            currentElement = arr[i];
            count = 1;
        }
    }

    // Print the frequency of the last element.
    cout << "Element " << currentElement << ": " << count << " times" << endl;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, n);

    return 0;
}
