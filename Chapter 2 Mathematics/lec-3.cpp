#include <iostream>

using namespace std;

bool isPalindrome(int number)
{
    int originalNumber = number;
    int reverseNumber = 0;

    while (number != 0)
    {
        int digit = number % 10;
        reverseNumber = (reverseNumber * 10) + digit;
        number /= 10;
    }

    return originalNumber == reverseNumber;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
    {
        cout << number << " is a palindrome." << endl;
    }
    else
    {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
