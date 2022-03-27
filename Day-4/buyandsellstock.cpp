//function to find maximum profit  
int maxProfit(vector<int>& prices) {
        int min_profit = INT_MAX;
        int max_profit = 0;
        for(int i = 0; i<prices.size(); i++){
            min_profit = min(prices[i], min_profit);
            max_profit = max(max_profit, prices[i] - min_profit);
        }
    return max_profit;
    }

//Time complexity: 0(n)
