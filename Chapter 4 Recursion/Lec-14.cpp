#include <iostream>
using namespace std;

void TOH(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        cout << "Move 1 from " << source << " to " << destination << endl;
        return;
    }
    TOH(n - 1, source, destination, auxiliary);
    cout << "Move " << n << " from " << source << " to " << destination << endl;
    TOH(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    TOH(n, 'A', 'B', 'C');

    return 0;
}
