#include <iostream>

using namespace std;

// Function to check if a given integer is a palindrome
bool isPalindrome(int number)
{
    int originalNumber = number;
    int reverseNumber = 0;

    // Reverse the number by extracting digits
    while (number != 0)
    {
        int digit = number % 10; // Get the last digit of the number
        reverseNumber = (reverseNumber * 10) + digit; // Build the reverse number
        number /= 10; // Remove the last digit
    }

    // Compare the original number with the reversed number
    return originalNumber == reverseNumber;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Check if the entered number is a palindrome using the isPalindrome function
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
