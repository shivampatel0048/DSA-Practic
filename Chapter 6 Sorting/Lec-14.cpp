#include <iostream>
using namespace std;

// Naive Solution -> O(n*m)
void intersection(int a[], int b[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int a[] = {1, 2, 2, 3, 4, 5};
    int b[] = {2, 2, 4, 6, 7};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    cout << "Intersection of the two arrays: ";
    intersection(a, b, m, n);

    return 0;
}
