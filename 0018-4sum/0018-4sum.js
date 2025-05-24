/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[][]}
 */
var fourSum = function (nums, target) {
    var res = [];
    let n = nums.length;
    nums.filter(num => num < n);
    nums.sort((a, b) => { return a - b; })
    for (let i = 0; i < nums.length; i++) {
        if (i > 0 && nums[i] === nums[i - 1]) continue;
        let arr = [];
        let j = n - 1;

        while (j > i + 2) {
            if (j < n - 1 && nums[j] === nums[j + 1]) {
                j--;
                continue;
            }
            let left = i + 1;
            let right = j - 1;
            while (left < right) {
                let sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum === target) {
                    res.push([nums[i], nums[j], nums[left], nums[right]]);
                    left++;
                    right--;
                    while (left < right && nums[left] === nums[left - 1]) left++;
                    while (left < right && nums[right] === nums[right + 1]) right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
            j--;
        }
    }
    return res;


};