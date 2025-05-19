/*
 * 129 - Best Time to Buy and Sell Stock - Easy
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=study-plan-v2&envId=top-interview-150
 */

/*
 * I originally did a solution in O(n^2) time complexity but it is more efficient to do, and the real solution is, in O(n) time
 * by using one loop and just keeping track of the min price.
 */


int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit;
}

int maxProfit(int* prices, int pricesSize) {
    int max = 0;

    for (int i = 0; i < pricesSize; i++) {
        for (int j = i + 1; j < pricesSize; j++) {
            int diff = prices[j] - prices[i];
            if (diff > max) {
                max = diff;
            }
        }
    }

    if (max <= 0) {
        return 0;
    }
    return max;
}
