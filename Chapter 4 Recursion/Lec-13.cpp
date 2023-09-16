#include <iostream>
using namespace std;

// Subsets of a string using recursion
void subSets(string s, string current = "", int i = 0)
{
    if (i == s.length())// s.charAt(i) in Java
    {
        cout << current << " ";
        return;
    }
    subSets(s, current, i + 1);
    subSets(s, current + s[i], i + 1);
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    subSets(s);

    return 0;
}
