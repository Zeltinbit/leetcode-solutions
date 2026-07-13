#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices)
        {
            // Update the lowest buying price
            if (price < minPrice)
            {
                minPrice = price;
            }

            // Calculate profit if we sell today
            int profit = price - minPrice;

            // Keep the maximum profit
            if (profit > maxProfit)
            {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};

int main()
{
    Solution solution;

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int result = solution.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}