#include <iostream>
using namespace std;

// Efficient Solution -> O(n+m)
void printUnion(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            if (i == 0 || a[i] != a[i - 1])
                cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            if (j == 0 || b[j] != b[j - 1])
                cout << b[j] << " ";
            j++;
        }
        else
        {
            if ((i == 0 || a[i] != a[i - 1]) && (j == 0 || b[j] != b[j - 1]))
                cout << a[i] << " ";
            i++;
            j++;
        }
    }

    while (i < m)
    {
        if (i == 0 || a[i] != a[i - 1])
            cout << a[i] << " ";
        i++;
    }

    while (j < n)
    {
        if (j == 0 || b[j] != b[j - 1])
            cout << b[j] << " ";
        j++;
    }
}

int main()
{
    int a[] = {1, 2, 2, 3, 4, 5};
    int b[] = {2, 2, 4, 6, 7};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    cout << "Union of the two arrays: ";
    printUnion(a, b, m, n);

    return 0;
}
