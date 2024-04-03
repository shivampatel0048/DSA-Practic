#include <iostream>
using namespace std;

// Efficient Solution -> O(n+m)
void intersection(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
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
