#include <iostream>
#include <algorithm>
#include <vector> // Include the vector header
using namespace std;

int main()
{
    vector<int> vec = {10, 20, 5, 7}; // Create a vector with initial values
    cout << "Original Vector: ";
    for (int value : vec) // Use a range-based for loop to iterate through the vector
    {
        cout << value << " "; // Print each element
    }
    cout << endl;

    sort(vec.begin(), vec.end()); // Sort the vector in ascending order using the sort function

    cout << "Sorted Vector in Ascending Order: ";
    for (int value : vec) // Use a range-based for loop again
    {
        cout << value << " "; // Print each element in ascending order
    }
    cout << endl;

    sort(vec.rbegin(), vec.rend()); // Sort the vector in descending order using reverse iterators

    cout << "Sorted Vector in Descending Order: ";
    for (int value : vec) // Use a range-based for loop
    {
        cout << value << " "; // Print each element in descending order
    }
    cout << endl;

    return 0;
}
