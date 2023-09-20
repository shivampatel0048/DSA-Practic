#include <iostream>
using namespace std;

int maxProfit(int price[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++) // Start from the second day
    {
        if (price[i] > price[i - 1])             // If the price is higher today
            profit += (price[i] - price[i - 1]); // Buy yesterday, sell today
    }
    return profit;
}

int main()
{
    int prices[] = {7, 1, 5, 3, 6, 4}; // Example prices array
    int n = sizeof(prices) / sizeof(prices[0]);

    int max_profit = maxProfit(prices, n);

    cout << "Maximum Profit: " << max_profit << endl;

    return 0;
}
