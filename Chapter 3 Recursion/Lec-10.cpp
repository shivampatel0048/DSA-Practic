#include <iostream>
using namespace std;

// Check string is Palindrome or not

bool isPalindrome(string &str, int start, int end)
{
    if (start >= end)
        return true;
    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
    // return (str.charAt(start) == str.charAt(end)) && isPalindrome(str, start + 1, end - 1); // in Java
}

int main()
{
    string str;
    cout << "Enter a String to check String is Palindrome or not : ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
