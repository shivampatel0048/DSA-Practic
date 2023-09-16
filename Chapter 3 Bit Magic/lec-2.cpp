#include <iostream>
using namespace std;

// in 32 bit system

int main()
{
    int a = 3;

    // Left shift operator (<<)
    cout << "Left shift operator\n";
    cout << (a << 1) << endl;
    cout << (a << 2) << endl;
    int b = 4;
    int c = (a << b);
    cout << c << endl;

    // Right shift operator(>>)
    cout << "Right shift operator\n";
    int x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    int y = 4;
    int z = (x >> y);
    cout << z << endl;

    // NOT operator ( ~ )
    cout << "NOT operator ( ~ )\n";
    cout << "unsigned int value";
    unsigned int p = 1; // unnsinged int for only +ve numbers only.
    cout << (~p) << endl;
    p = 5;
    cout << (~p);
    cout << "\nsigned int value\n";
    int q = 1;
    cout << (~q) << endl;
    q = 5;
    cout << (~q);

    return 0;
}