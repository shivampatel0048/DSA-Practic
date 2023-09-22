#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate the maximum profit from buying and selling stocks
int maxProfit(int price[], int start, int end)
{
    // Base case: if there are no days or only one day, profit is 0
    if (end <= start)
        return 0;

    int profit = 0; // Initialize profit as 0

    // Nested loops to consider all possible buy and sell combinations
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            // If selling on day j is profitable
            if (price[j] > price[i])
            {
                // Calculate the current profit by buying on day i and selling on day j
                int currProfit = price[j] - price[i] + maxProfit(price, start, i - 1) + maxProfit(price, j + 1, end);

                // Update the maximum profit if the current profit is greater
                profit = max(profit, currProfit);
            }
        }
    }

    // Return the maximum profit
    return profit;
}

int main()
{
    int price[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(price) / sizeof(price[0]);

    // Call the maxProfit function to find the maximum profit
    int max_profit = maxProfit(price, 0, n - 1);

    // Display the maximum profit
    cout << "Maximum profit: " << max_profit << endl;

    return 0;
}
