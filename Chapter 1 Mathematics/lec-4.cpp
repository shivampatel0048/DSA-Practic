#include <iostream>
using namespace std;

// int numFact(int n)
// {
//     unsigned long long fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// Function to calculate the factorial of a number
unsigned long long numFact(int n)
{
    // Base case: If n is 0, the factorial is 1
    if (n == 0)
    {
        return 1;
    }
    // Recursive case: Multiply n by the factorial of (n-1)
    return n * numFact(n - 1);
}

int main()
{
    int n;

    // Prompt the user to enter a number
    cout << "Enter a number : ";
    cin >> n;

    // Calculate the factorial using the numFact function and display the result
    cout << "The Factorial of " << n << " is : " << numFact(n);

    return 0;
}