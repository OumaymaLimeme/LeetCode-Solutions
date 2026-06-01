/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function (nums, k) {
    var map = new Map();
    var res = [];
    for (const num of nums) {
        map.set(num, (map.get(num) || 0) + 1);
    }
    const sorted = [...map.entries()]
        .sort((a, b) => b[1] - a[1]);

    console.log(sorted);

    for (i = 0; i < k; i++) {
        res.push(sorted[i][0]);
    }
    return res;

};