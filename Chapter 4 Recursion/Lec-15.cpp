#include <iostream>
using namespace std;

// Josephus Problem
// Rewatch this video

int josephus(int n, int k)
{
    if (n == 1)
    {
        return 0; // The last remaining person is at position 0 (zero-based index).
    }
    else
    {
        return (josephus(n - 1, k) + k) % n;
    }
}

int main()
{
    int n; // Number of people in the circle
    int k; // Eliminate every Kth person

    cout << "Enter the number of people in the circle : ";
    cin >> n;
    cout << "Enter the eliminate every 3rd person : ";

    int survivor = josephus(n, k);
    cout << "The survivor is at position: " << survivor << endl;

    return 0;
}
