#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> prices){
    // every price[i] is day of curr stock

    int bestBuy = prices[0];
    int maxProfit = 0;
    
    for (int i=1; i<prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }

        bestBuy = min(bestBuy, prices[i]);
        
    }

    return maxProfit;
    
}

int main()
{
    vector<int> prices = {7,6,4,3,1};

    cout<< maxProfit(prices) << '\n';

}