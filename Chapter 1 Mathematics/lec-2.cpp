#include <iostream>
using namespace std;

// iterative solution
//  int countDigit(int n)
//  {
//      int count = 0;
//      while (n > 0)
//      {
//          n = n / 10;
//          ++count;
//      }
//      return count;
//  }

// Recursive function to count the number of digits in an integer.
int countDigit(int n)
{
    // Base case: If n is 0, there are no digits.
    if (n == 0)
    {
        return 0;
    }

    // Recursive case: Remove the last digit from n (by dividing by 10)
    // and add 1 to the count of digits.
    return 1 + countDigit(n / 10);
}

int main()
{
    int n;
    cout << "Enter a value: ";
    cin >> n;

    // Call the countDigit function to calculate the number of digits.
    cout << "The number of digits is : " << countDigit(n);
    return 0;
}