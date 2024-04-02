#include <iostream>
#include <vector> // Include the vector header
using namespace std;

        // Vector Reference - https://cplusplus.com/reference/vector/vector/

int main() {
    // Create an empty vector of integers
    vector<int> numbers;

    // Add elements to the vector using push_back
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);

    // Accessing elements by index
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers[1] << endl;

    // Size of the vector
    cout << "Size of the vector: " << numbers.size() << endl;

    // Iterating through the vector
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Removing an element by index
    numbers.erase(numbers.begin() + 2); // Removes the third element (30)

    // Vector after removal
    cout << "Vector after removal: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Check if the vector is empty
    if (numbers.empty()) {
        cout << "The vector is empty." << endl;
    } else {
        cout << "The vector is not empty." << endl;
    }

    return 0;
}
