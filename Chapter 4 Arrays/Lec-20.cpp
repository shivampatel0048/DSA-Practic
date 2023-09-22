#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate the trapped rainwater given an array of heights
int trapRainwater(int height[], int n)
{
    if (n <= 2)
    {
        return 0; // If there are less than 3 elements, no water can be trapped
    }

    int leftMax[n];  // Array to store the maximum height on the left of each element
    int rightMax[n]; // Array to store the maximum height on the right of each element

    // Calculate the maximum height on the left for each element
    leftMax[0] = height[0]; // The leftmost element has no element on its left
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], height[i]); // Update leftMax if a taller wall is encountered
    }

    // Calculate the maximum height on the right for each element
    rightMax[n - 1] = height[n - 1]; // The rightmost element has no element on its right
    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], height[i]); // Update rightMax if a taller wall is encountered
    }

    int trappedWater = 0; // Variable to store the total trapped water

    // Iterate through the heights to calculate trapped water
    for (int i = 0; i < n; i++)
    {
        // The trapped water at each position is determined by the minimum of leftMax and rightMax
        // The amount of water that can be trapped at this position is (min(leftMax, rightMax) - height[i])
        trappedWater += min(leftMax[i], rightMax[i]) - height[i];
    }

    return trappedWater; // Return the total trapped water
}

int main()
{
    int height[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1}; // Example height array
    int n = sizeof(height) / sizeof(height[0]);          // Calculate the size of the array

    int trappedWater = trapRainwater(height, n); // Call the trapRainwater function

    cout << "Trapped Rainwater: " << trappedWater << " units" << endl; // Print the result

    return 0;
}
