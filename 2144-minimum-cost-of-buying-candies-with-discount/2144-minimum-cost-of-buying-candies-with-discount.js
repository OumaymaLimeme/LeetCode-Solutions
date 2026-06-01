/**
 * @param {number[]} cost
 * @return {number}
 */
var minimumCost = function (cost) {
    const n = cost.length;
    cost.sort((a, b) => b - a);
    var sum = 0
    for (let i = 0; i < n; i++) {
        if ((i + 1) % 3 !== 0) {
            sum += cost[i];
        }
    }
    return sum;
};