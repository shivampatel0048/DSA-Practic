#include <iostream>
#include <cmath>
using namespace std;

// int sqrtRootFloor(int x) // Time complexity : θ(√x)
// {
//     int i = 1; // Initialize a variable 'i' to start checking square roots from 1.

//     // Start a loop to iterate through integers until we find an 'i' such that (i * i) exceeds 'x'.
//     while (i * i <= x)
//     {
//         i++; // Increment 'i' until we find the smallest 'i' where (i * i) exceeds or equals 'x'.
//     }

//     return (i - 1); // Subtract 1 from 'i' to get the floor of the square root of 'x'.
// }

// Another Aproach
// void sqrtRootFloor(int num)
// {
//     if (num < 0)
//     {
//         cout << "Square root is not defined for negative numbers." << endl;
//     }
//     else
//     {
//         double squareRoot = sqrt(num);              // Calculate the square root
//         double floorSquareRoot = floor(squareRoot); // Calculate the floor square root

//         cout << "Square root: " << squareRoot << endl;
//         cout << "Floor square root: " << floorSquareRoot << endl;
//     }
// }

// Another Aproach
// int sqrtRootFloor(int x) // Time complexity : O(log(x)
// {
//     if (x <= 1)
//     {
//         return x; // The square root of 0 or 1 is the number itself.
//     }

//     int left = 1;  // Initialize the left boundary to 1.
//     int right = x; // Initialize the right boundary to 'x'.

//     int result; // Variable to store the floor square root.

//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2; // Calculate the middle point.

//         cout<<"mid = : "<<mid<<endl;

//         if (mid <= x / mid)
//         {
//             // If mid^2 is less than or equal to 'x', update the result and move to the right half.
//             left = mid + 1;
//             result = mid;
//             cout<<"result : "<<result<<endl;
//         }
//         else
//         {
//             // If mid^2 is greater than 'x', move to the left half.
//             right = mid - 1;
//             cout<<"right : "<<right<<endl;
//         }
//         cout<<endl;
//     }

//     return result;
// }

// Another Aproach
// int sqrtRootFloor(int x)
// {
//     int sqr = sqrt(x);
//     int result = (int)(sqr);
//     return result;
// }

// Another Aproach
int sqrtRootFloor(int x)
{
    // Base cases
    if (x == 0 || x == 1)
        return x;

    // Do Binary Search for floor(sqrt(x))
    int start = 1, end = x / 2, ans;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        // If x is a perfect square
        int sqr = mid * mid;
        if (sqr == x)
            return mid;
        if (sqr <= x)
        {
            start = mid + 1;
            ans = mid;
        }
        else // If mid*mid is greater than x
            end = mid - 1;
    }
    return ans;
}

int main()
{
    double num;

    cout << "Enter a number: ";
    cin >> num;

    // sqrtRootFloor(num);
    int result = sqrtRootFloor(num);

    cout << "Floor square root of " << num << " is: " << result << endl;

    return 0;
}
