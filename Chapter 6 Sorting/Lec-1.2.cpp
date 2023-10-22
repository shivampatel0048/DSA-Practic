#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x;
    int y;
};

// Custom comparison function to sort points based on their x and y coordinates
bool comparePoints(Point p1, Point p2)
{
    if (p1.x == p2.x)
    {
        return p1.y < p2.y; // or -> return p1.x < p2.x;
    }
    return p1.x < p2.x;
}

int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    cout << "Original Points: ";
    for (int i = 0; i < n; i++)
    {
        cout << "(" << arr[i].x << ", " << arr[i].y << ") ";
    }
    cout << endl;

    sort(arr, arr + n, comparePoints); // Sort the points using the custom comparison function

    cout << "Sorted Points: ";
    for (auto i : arr)
    {
        cout << "(" << i.x << ", " << i.y << ") ";
    }
    cout << endl;

    return 0;
}
