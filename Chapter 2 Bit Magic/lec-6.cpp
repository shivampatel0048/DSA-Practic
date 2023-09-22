#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter the n : ";
    cin >> n;
    cout << "Enter the k : ";
    cin >> k;

    // 1st Methode
    if (n & (1 << (k - 1)) != 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    // 2st Methode
    if (n & (n >> (k - 1)) == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}