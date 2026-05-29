/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {

    if (prices.length <= 1) return 0;

    let sell = prices[1];
    let buy = prices[0];
    var res = 0;

    for (let i = 1; i < prices.length - 1; i++) {
        if (prices[i] < buy) {
            buy = prices[i];
            sell = prices[i + 1];
        }
        else sell = Math.max(sell, prices[i]);
        res = Math.max(res, sell - buy);

    }
    sell = Math.max(sell, prices[prices.length - 1]);
    res = Math.max(res, sell - buy);

    return res;

};