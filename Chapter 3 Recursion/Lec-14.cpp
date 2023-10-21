#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination, int &step)
{
    if (n == 1)
    {
        cout << "Step " << ++step << ": Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary, step);
    cout << "Step " << ++step << ": Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, auxiliary, source, destination, step);
}

int main()
{
    int n;
    int step = 0;

    cout << "Enter the number of disks: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C', step);
    cout << "Total number of steps: " << step << endl;

    return 0;
}
