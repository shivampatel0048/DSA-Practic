#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> myVector;

    // Add elements to the vector
    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);

    // Access elements using indexing
    cout << "First element: " << myVector[0] << endl;
    cout << "Second element: " << myVector[1] << endl;
    cout << "Third element: " << myVector[2] << endl;

    // Iterate through the vector using a loop
    cout << "Vector elements: ";
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    return 0;
}
