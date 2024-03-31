// Naive solution

#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else
        {
            cout << b[j] << " ";
            j++;
        }
    }

    while (i < m)
    {
        cout << a[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << b[j] << " ";
        j++;
    }
}

int main()
{
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    merge(a, b, m, n);

    return 0;
}

/*
   Time : Theeta((m+n))

   Theeta used for exactly time complexity
*/