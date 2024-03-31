// Naive solution

#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int c[m + n];

    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        c[i + m] = b[i];
    }

    sort(c, c + m + n);

    for (int i = 0; i < (m + n); i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    merge(a, b, m, n);

    return 0;
}

/*
   Time : O((m+n) * log(m+n))
   Aux space : theeta(m+n)
*/