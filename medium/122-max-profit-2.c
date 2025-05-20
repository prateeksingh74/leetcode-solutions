/*
 * 122 - Best Time to Buy and Sell Stock 2 - Medium
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * My original solution fails for a few test cases. It is too greedy and only accounts for if we make two transactions. I then redid
 * my solution in a much more simple logical way which ended up being correct. In this correct solution we first traverse the array
 * and we check if the current price is greater than the price from the previous day. If this is the case, just add that to our profit.  
 */

--CORRECT SOLUTION--
int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

--INCORRECT SOLUTION--
int maxProfit(int* prices, int pricesSize) {
    int min_one = prices[0];
    int maxProfit_one = 0;
    int index;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min_one) {
            min_one = prices[i];
        }
        int profit = prices[i] - min_one;
        if (profit > maxProfit_one) {
            maxProfit_one = profit;
            index = i;
        }
    }

    int min_two = prices[index];
    int maxProfit_two = 0;

    for (int i = index; i < pricesSize; i++) {
        if (prices[i] < min_two) {
            min_two = prices[i];
        }
        int profit = prices[i] - min_two;
        if (profit > maxProfit_two) {
            maxProfit_two = profit;
        }
    }

    return maxProfit_one + maxProfit_two;
}
