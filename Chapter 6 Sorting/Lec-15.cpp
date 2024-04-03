#include <iostream>
#include <algorithm>
using namespace std;

// Naive Solution -> O(n+m)*log(m+n)
void printUnion(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[i + m] = b[i];
    }
    sort(c, c + m + n);

    for (int i = 0; i < m + n; i++)
    {
        if (i == 0 || c[i] != c[i - 1])
        {
            cout << c[i] << " ";
        }
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
