#include <iostream>
using namespace std;

// Function to swap two characters in a string
void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

// Function to generate permutations of a string
void generatePermutations(string str, int left, int right)
{
    if (left == right)
    {
        cout << str << endl; // Print the permutation
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            // Swap the current character with the first character
            // and recursively generate permutations for the rest of the string
            swap(str[left], str[i]);
            generatePermutations(str, left + 1, right);
            // Restore the original order (backtracking)
            swap(str[left], str[i]);
        }
    }
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int n = input.length();
    generatePermutations(input, 0, n - 1);

    return 0;
}
