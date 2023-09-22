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

unsigned long long numFact(int n) {
    if (n == 0){
        return 1;
    }
    return n*numFact(n-1);
}

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    cout << "The Factorial is of " << n << " is : " << numFact(n);
    return 0;
}