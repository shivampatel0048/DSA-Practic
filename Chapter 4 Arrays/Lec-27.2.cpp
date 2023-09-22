#include <iostream>

using namespace std;

int main()
{
    int M, N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Enter the number of N-bonacci numbers to generate (M): ";
    cin >> M;

    // Initialize an array to store the N-bonacci numbers.
    int arr[M];

    // Initialize the first N elements of the array.
    for (int i = 0; i < N; i++)
    {
        arr[i] = 0;
    }

    // Set the (N-1)-th element to 1 to start the sequence.
    arr[N - 1] = 1;

    // Generate the N-bonacci numbers and store them in the array.
    for (int i = N; i < M; i++)
    {
        int nextNbonacci = 0;
        for (int j = i - N; j < i; j++)
        {
            nextNbonacci += arr[j];
        }
        arr[i] = nextNbonacci;
    }

    // Print the first M N-bonacci numbers.
    cout << "The first " << M << " N-bonacci numbers are:\n";
    for (int i = 0; i < M; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
