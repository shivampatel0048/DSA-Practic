#include <iostream>
using namespace std;

// Josephus Problem

// Recursive function to find the position of the survivor.
// Parameters:
// - n: Number of people in the circle
// - k: Eliminate every k-th person
int josephus(int n, int k)
{
    // If there's only one person left (base case), return 0 as the position.
    if (n == 1)
    {
        return 0; // The last remaining person is at position 0 (zero-based index).
    }
    else
    {
        // Recursively call josephus for n-1 people and adjust the position
        // according to the k value. The survivor's position is determined by
        // adding k and taking the modulo n to ensure it stays within bounds.
        return (josephus(n - 1, k) + k) % n;
    }
}

int main()
{
    int n; // Number of people in the circle
    int k; // Eliminate every k-th person

    cout << "Enter the number of people in the circle : ";
    cin >> n;
    cout << "Enter the eliminate every k-th person : ";
    cin >> k;

    // Call the josephus function to find the position of the survivor.
    int survivor = josephus(n, k);

    cout << "The survivor is at position: " << survivor << endl;

    return 0;
}
