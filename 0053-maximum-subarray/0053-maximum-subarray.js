/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function (nums) {
    var res = nums[0];
    var tab = [];
    tab.push(nums[0]);
    for (let i = 1; i < nums.length; i++) {
        tab.push(Math.max(nums[i], nums[i] + tab[i - 1]));
        res = Math.max(res, tab[i]);
    }
    console.log("tabbbb", tab)
    return res;

};